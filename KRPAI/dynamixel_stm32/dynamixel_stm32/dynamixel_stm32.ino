#include <DynamixelSerial.h>
#include <Wire.h>
#include <TPA81.h>
#include "bacaIr.h"
#include "bacaPing.h"
//#define Baudrate  100000
//#define PROTOCOL_VERSION                1.0
#define pinuv    19
#define pinwl 4
#define pinsemprot 2
TPA81 tpa;
int wl;
int ruang = 0;
bool belok = true;
bool hitam = false;
bool karpet = false;
bool masukruang = false;
bool titikapi = false;
bool  ruangapi = false;
bool apipadam = false;
//bool ruang=false;
float pidki;
float kpki = 2.8;//2.8
float kiki = 0;
float kdki = 5;
float outp;
float outi;
float outd;
float dki;
float pv;
float integral;
float ti = 5;
float imax = 100;
int sp = 10;
int nilai;
int hasil;
float error;
float errors;
int kaki1;
int kaki4;
int kaki7;
int kaki10;
int kaki13;
int kaki16;
unsigned long Ts = 2000;

//pemanggilan objek di class sensor ping dan IR
bacaIR bacaIR1(PA0, 3803, 500, 1, 50);
bacaIR bacaIR2(PA4, 3803, 500, 1, 50);
ping ping1(PC5);
ping ping2(PA2);
ping ping3(PA3);
ping ping4(PC4);

int ntpa[7];
//const int DXL_DIR_PIN = 28;
const uint8_t DXL[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
int stnd[] = {157, 114, 115, 148, 114, 115, 139, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180};
int maju[] = {
  157, 104, 115, 148, 114, 115, 138, 96, 115, 157, 180, 180, 147, 190, 180, 139, 180, 180,
  137, 104, 115, 148, 114, 115, 118, 96, 115, 157, 180, 180, 167, 190, 180, 139, 180, 180,
  137, 114, 115, 148, 114, 115, 118, 114, 115, 157, 180, 180, 167, 180, 180, 139, 180, 180,
  157, 114, 115, 148, 114, 115, 138, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180,
  157, 114, 115, 148, 104, 115, 138, 114, 115, 157, 190, 180, 147, 180, 180, 139, 190, 180,
  157, 114, 115, 127, 104, 115, 138, 114, 115, 177, 190, 180, 147, 180, 180, 159, 190, 180,
  157, 114, 115, 127, 114, 115, 138, 114, 115, 177, 180, 180, 147, 180, 180, 159, 180, 180,
  157, 114, 115, 148, 114, 115, 138, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180
};
int putarka[] = {
  157, 100, 115, 148, 114, 115, 139, 96, 115, 157, 180, 180, 147, 194, 180, 139, 180, 180,
  179, 100, 115, 148, 114, 115, 161, 96, 115, 157, 180, 180, 169, 194, 180, 139, 180, 180,
  179, 114, 115, 148, 114, 115, 161, 114, 115, 157, 180, 180, 169, 180, 180, 139, 180, 180,
  157, 114, 115, 148, 114, 115, 139, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180,
  157, 114, 115, 148, 100, 115, 139, 114, 115, 157, 194, 180, 147, 180, 180, 139, 194, 180,
  157, 114, 115, 170, 100, 115, 139, 114, 115, 179, 194, 180, 147, 180, 180, 161, 194, 180,
  157, 114, 115, 170, 114, 115, 139, 114, 115, 179, 180, 180, 147, 180, 180, 161, 180, 180,
  157, 114, 115, 148, 114, 115, 139, 96, 115, 157, 180, 180, 147, 190, 180, 139, 180, 180
};
int putarki[] = {
  157, 100, 115, 148, 114, 115, 138, 96, 115, 157, 180, 180, 147, 194, 180, 139, 180, 180,
  135, 100, 115, 148, 114, 115, 116, 96, 115, 157, 180, 180, 125, 194, 180, 139, 180, 180,
  135, 114, 115, 148, 114, 115, 116, 114, 115, 157, 180, 180, 125, 180, 180, 139, 180, 180,
  157, 114, 115, 148, 114, 115, 138, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180,
  157, 114, 115, 148, 100, 115, 138, 114, 115, 157, 194, 180, 147, 180, 180, 139, 194, 180,
  157, 114, 115, 126, 100, 115, 138, 114, 115, 135, 194, 180, 147, 180, 180, 107, 194, 180,
  157, 114, 115, 126, 114, 115, 138, 114, 115, 135, 180, 180, 147, 180, 180, 107, 180, 180,
  157, 114, 115, 148, 114, 115, 138, 96, 115, 157, 180, 180, 147, 190, 180, 139, 180, 180
};
int geserka[] = {
  157, 114, 115, 148, 100, 115, 139, 114, 115, 157, 190, 180, 147, 180, 180, 139, 190, 180,
  157, 114, 115, 148, 107, 134, 139, 114, 115, 126, 190, 180, 147, 180, 180, 168, 190, 180,
  157, 114, 115, 148, 114, 134, 139, 114, 115, 126, 180, 180, 147, 180, 180, 168, 180, 180,
  157, 114, 115, 148, 114, 115, 139, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180,
  157, 105, 115, 148, 114, 115, 139, 105, 115, 157, 180, 180, 147, 190, 180, 139, 180, 180,
  180, 105, 115, 148, 114, 115, 119, 105, 139, 157, 180, 180, 147, 190, 196, 139, 180, 180,
  180, 114, 115, 148, 114, 115, 119, 114, 139, 157, 180, 180, 147, 180, 196, 139, 180, 180,
  157, 114, 115, 148, 114, 115, 139, 114, 115, 157, 180, 180, 147, 180, 180, 139, 180, 180
};
int baca;
void setup() {
  Serial.begin(115200);
  Dynamixel.setSerial(&Serial);
  Dynamixel.begin(1000000, PA8);
  pingdxl();
  torsion();
  berdiri();
  pinMode(pinwl, INPUT);
  pinMode(pinsemprot, OUTPUT);
  analogReadResolution(12);
  Wire.begin();
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Ctitik();
  PIDki(ping1.ukur(), ping2.ukur(), bacaIR1.ukur(), bacaIR2.ukur());
  //PIDka(ping4.ukur(), ping3.ukur(), bacaIR1.ukur(), bacaIR2.ukur());
  //putarKi();
  //geserKa();
  //jmaju();
  //berdiri();
  //bacauv();
  //bacaTPA();
  //bacaWL();
  //scanA();
  //SND();
//  Serial.print(ping1.ukur());
//  Serial.print(" ");
//  Serial.print(ping2.ukur());
//  Serial.print(" ");
//  Serial.print(ping3.ukur());
//  Serial.print(" ");
//  Serial.println(ping4.ukur());
//  Serial.print(bacaIR1.ukur());
//  Serial.print(" ");
//  Serial.println(bacaIR2.ukur());
//bacaTPA();
  /*scanka();
    if(ruangapi){
    scanA();
    }
    digitalWrite(pinsemprot, HIGH);
    delay(1000);
    digitalWrite(pinsemprot, LOW);
    delay(1000);*/
}
