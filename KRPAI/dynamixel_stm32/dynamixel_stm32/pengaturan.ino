void Ctitik() {
  if (Serial.available() > 0) {
    baca = Serial.parseInt();
    if (baca == 1) {
      berdiri();
    }
    else if (baca == 2) {
      torsion();
    }
    else if (baca == 3) {
      torsioff();
    }
    else if (baca == 4) {
      torsionKi();
    }
    else if (baca == 5) {
      torsionKa();
    }
  }
  //putarKi();
  if (millis() > Ts + 5000) {
    Ts = millis();
    bacaPosisi();
    Serial.println(" ");
  }
}

void bacaPosisi(){
  for (int i=0;i<18;i++){
    Serial.print("Servo ");
    Serial.print(DXL[i]);
    Serial.print(" : ");
    Serial.println(map(Dynamixel.readPosition(DXL[i]),0,1023,0,300));
  }
}
