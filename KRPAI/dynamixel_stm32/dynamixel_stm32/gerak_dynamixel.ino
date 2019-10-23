void berdiri() {
  for (int m = 0; m < 18; m++) {
    Dynamixel.move(DXL[m], map(stnd[m], 0, 300, 0, 1023));
  }
}

void scanA() {
  if (titikapi == true) {
    digitalWrite(pinsemprot, HIGH);
    //break;
  }
  else {
    for (int m = 0; m < 45; m ++) {
      bacaTPA();
      //Serial.println(titikapi);
      if (titikapi == true) {
        //siram();
        break;
      }
      Dynamixel.move(DXL[0], map(157 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[1], map(stnd[1], 0, 300, 0, 1023));
      Dynamixel.move(DXL[2], map(stnd[2], 0, 300, 0, 1023));
      Dynamixel.move(DXL[3], map(148 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[4], map(stnd[4], 0, 300, 0, 1023));
      Dynamixel.move(DXL[5], map(stnd[5], 0, 300, 0, 1023));
      Dynamixel.move(DXL[6], map(139 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[7], map(stnd[7], 0, 300, 0, 1023));
      Dynamixel.move(DXL[8], map(stnd[8], 0, 300, 0, 1023));
      Dynamixel.move(DXL[9], map(157 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[10], map(stnd[10], 0, 300, 0, 1023));
      Dynamixel.move(DXL[11], map(stnd[11], 0, 300, 0, 1023));
      Dynamixel.move(DXL[12], map(147 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[13], map(stnd[13], 0, 300, 0, 1023));
      Dynamixel.move(DXL[14], map(stnd[14], 0, 300, 0, 1023));
      Dynamixel.move(DXL[15], map(139 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[16], map(stnd[16], 0, 300, 0, 1023));
      Dynamixel.move(DXL[17], map(stnd[17], 0, 300, 0, 1023));
    }
    for (int m = 0; m > -90; m --) {
      bacaTPA();
      //Serial.println(titikapi);
      if (titikapi == true) {
        //siram();
        break;
      }
      Dynamixel.move(DXL[0], map(202 +  m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[1], map(stnd[1], 0, 300, 0, 1023));
      Dynamixel.move(DXL[2], map(stnd[2], 0, 300, 0, 1023));
      Dynamixel.move(DXL[3], map(193 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[4], map(stnd[4], 0, 300, 0, 1023));
      Dynamixel.move(DXL[5], map(stnd[5], 0, 300, 0, 1023));
      Dynamixel.move(DXL[6], map(184 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[7], map(stnd[7], 0, 300, 0, 1023));
      Dynamixel.move(DXL[8], map(stnd[8], 0, 300, 0, 1023));
      Dynamixel.move(DXL[9], map(202 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[10], map(stnd[10], 0, 300, 0, 1023));
      Dynamixel.move(DXL[11], map(stnd[11], 0, 300, 0, 1023));
      Dynamixel.move(DXL[12], map(192 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[13], map(stnd[13], 0, 300, 0, 1023));
      Dynamixel.move(DXL[14], map(stnd[14], 0, 300, 0, 1023));
      Dynamixel.move(DXL[15], map(184 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[16], map(stnd[16], 0, 300, 0, 1023));
      Dynamixel.move(DXL[17], map(stnd[17], 0, 300, 0, 1023));
      //bacaTPA();
    }
    for (int m = 0; m < 45; m ++) {
      bacaTPA();
      //Serial.println(titikapi);
      if (titikapi == true) {
        //siram();
        break;
      }
      Dynamixel.move(DXL[0], map(112 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[1], map(stnd[1], 0, 300, 0, 1023));
      Dynamixel.move(DXL[2], map(stnd[2], 0, 300, 0, 1023));
      Dynamixel.move(DXL[3], map(103 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[4], map(stnd[4], 0, 300, 0, 1023));
      Dynamixel.move(DXL[5], map(stnd[5], 0, 300, 0, 1023));
      Dynamixel.move(DXL[6], map(94 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[7], map(stnd[7], 0, 300, 0, 1023));
      Dynamixel.move(DXL[8], map(stnd[8], 0, 300, 0, 1023));
      Dynamixel.move(DXL[9], map(112 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[10], map(stnd[10], 0, 300, 0, 1023));
      Dynamixel.move(DXL[11], map(stnd[11], 0, 300, 0, 1023));
      Dynamixel.move(DXL[12], map(102 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[13], map(stnd[13], 0, 300, 0, 1023));
      Dynamixel.move(DXL[14], map(stnd[14], 0, 300, 0, 1023));
      Dynamixel.move(DXL[15], map(94 + m, 0, 300, 0, 1023));
      Dynamixel.move(DXL[16], map(stnd[16], 0, 300, 0, 1023));
      Dynamixel.move(DXL[17], map(stnd[17], 0, 300, 0, 1023));
    }
  }
}

void jmaju() {
  for (int m = 0; m < 127; m = m + 18) {
    Dynamixel.move(DXL[0], map(maju[m], 0, 300, 0, 1023));
    Dynamixel.move(DXL[1], map(maju[m + 1], 0, 300, 0, 1023));
    Dynamixel.move(DXL[2], map(maju[m + 2], 0, 300, 0, 1023));
    Dynamixel.move(DXL[3], map(maju[m + 3], 0, 300, 0, 1023));
    Dynamixel.move(DXL[4], map(maju[m + 4], 0, 300, 0, 1023));
    Dynamixel.move(DXL[5], map(maju[m + 5], 0, 300, 0, 1023));
    Dynamixel.move(DXL[6], map(maju[m + 6], 0, 300, 0, 1023));
    Dynamixel.move(DXL[7], map(maju[m + 7], 0, 300, 0, 1023));
    Dynamixel.move(DXL[8], map(maju[m + 8], 0, 300, 0, 1023));
    Dynamixel.move(DXL[9], map(maju[m + 9], 0, 300, 0, 1023));
    Dynamixel.move(DXL[10], map(maju[m + 10], 0, 300, 0, 1023));
    Dynamixel.move(DXL[11], map(maju[m + 11], 0, 300, 0, 1023));
    Dynamixel.move(DXL[12], map(maju[m + 12], 0, 300, 0, 1023));
    Dynamixel.move(DXL[13], map(maju[m + 13], 0, 300, 0, 1023));
    Dynamixel.move(DXL[14], map(maju[m + 14], 0, 300, 0, 1023));
    Dynamixel.move(DXL[15], map(maju[m + 15], 0, 300, 0, 1023));
    Dynamixel.move(DXL[16], map(maju[m + 16], 0, 300, 0, 1023));
    Dynamixel.move(DXL[17], map(maju[m + 17], 0, 300, 0, 1023));
    //delay(2000);
  }
}

void putarKa() {
  for (int m = 0; m < 127; m = m + 18) {
    Dynamixel.move(DXL[0], map(putarka[m], 0, 300, 0, 1023));
    Dynamixel.move(DXL[1], map(putarka[m + 1], 0, 300, 0, 1023));
    Dynamixel.move(DXL[2], map(putarka[m + 2], 0, 300, 0, 1023));
    Dynamixel.move(DXL[3], map(putarka[m + 3], 0, 300, 0, 1023));
    Dynamixel.move(DXL[4], map(putarka[m + 4], 0, 300, 0, 1023));
    Dynamixel.move(DXL[5], map(putarka[m + 5], 0, 300, 0, 1023));
    Dynamixel.move(DXL[6], map(putarka[m + 6], 0, 300, 0, 1023));
    Dynamixel.move(DXL[7], map(putarka[m + 7], 0, 300, 0, 1023));
    Dynamixel.move(DXL[8], map(putarka[m + 8], 0, 300, 0, 1023));
    Dynamixel.move(DXL[9], map(putarka[m + 9], 0, 300, 0, 1023));
    Dynamixel.move(DXL[10], map(putarka[m + 10], 0, 300, 0, 1023));
    Dynamixel.move(DXL[11], map(putarka[m + 11], 0, 300, 0, 1023));
    Dynamixel.move(DXL[12], map(putarka[m + 12], 0, 300, 0, 1023));
    Dynamixel.move(DXL[13], map(putarka[m + 13], 0, 300, 0, 1023));
    Dynamixel.move(DXL[14], map(putarka[m + 14], 0, 300, 0, 1023));
    Dynamixel.move(DXL[15], map(putarka[m + 15], 0, 300, 0, 1023));
    Dynamixel.move(DXL[16], map(putarka[m + 16], 0, 300, 0, 1023));
    Dynamixel.move(DXL[17], map(putarka[m + 17], 0, 300, 0, 1023));
    //delay(2000);
  }
}

void putarKi() {
  for (int m = 0; m < 127; m = m + 18) {
    Dynamixel.move(DXL[0], map(putarki[m], 0, 300, 0, 1023));
    Dynamixel.move(DXL[1], map(putarki[m + 1], 0, 300, 0, 1023));
    Dynamixel.move(DXL[2], map(putarki[m + 2], 0, 300, 0, 1023));
    Dynamixel.move(DXL[3], map(putarki[m + 3], 0, 300, 0, 1023));
    Dynamixel.move(DXL[4], map(putarki[m + 4], 0, 300, 0, 1023));
    Dynamixel.move(DXL[5], map(putarki[m + 5], 0, 300, 0, 1023));
    Dynamixel.move(DXL[6], map(putarki[m + 6], 0, 300, 0, 1023));
    Dynamixel.move(DXL[7], map(putarki[m + 7], 0, 300, 0, 1023));
    Dynamixel.move(DXL[8], map(putarki[m + 8], 0, 300, 0, 1023));
    Dynamixel.move(DXL[9], map(putarki[m + 9], 0, 300, 0, 1023));
    Dynamixel.move(DXL[10], map(putarki[m + 10], 0, 300, 0, 1023));
    Dynamixel.move(DXL[11], map(putarki[m + 11], 0, 300, 0, 1023));
    Dynamixel.move(DXL[12], map(putarki[m + 12], 0, 300, 0, 1023));
    Dynamixel.move(DXL[13], map(putarki[m + 13], 0, 300, 0, 1023));
    Dynamixel.move(DXL[14], map(putarki[m + 14], 0, 300, 0, 1023));
    Dynamixel.move(DXL[15], map(putarki[m + 15], 0, 300, 0, 1023));
    Dynamixel.move(DXL[16], map(putarki[m + 16], 0, 300, 0, 1023));
    Dynamixel.move(DXL[17], map(putarki[m + 17], 0, 300, 0, 1023));
    //delay(2000);
  }
}

void geserKa() {
  for (int m = 0; m < 127; m = m + 18) {
    Dynamixel.move(DXL[0], map(geserka[m], 0, 300, 0, 1023));
    Dynamixel.move(DXL[1], map(geserka[m + 1], 0, 300, 0, 1023));
    Dynamixel.move(DXL[2], map(geserka[m + 2], 0, 300, 0, 1023));
    Dynamixel.move(DXL[3], map(geserka[m + 3], 0, 300, 0, 1023));
    Dynamixel.move(DXL[4], map(geserka[m + 4], 0, 300, 0, 1023));
    Dynamixel.move(DXL[5], map(geserka[m + 5], 0, 300, 0, 1023));
    Dynamixel.move(DXL[6], map(geserka[m + 6], 0, 300, 0, 1023));
    Dynamixel.move(DXL[7], map(geserka[m + 7], 0, 300, 0, 1023));
    Dynamixel.move(DXL[8], map(geserka[m + 8], 0, 300, 0, 1023));
    Dynamixel.move(DXL[9], map(geserka[m + 9], 0, 300, 0, 1023));
    Dynamixel.move(DXL[10], map(geserka[m + 10], 0, 300, 0, 1023));
    Dynamixel.move(DXL[11], map(geserka[m + 11], 0, 300, 0, 1023));
    Dynamixel.move(DXL[12], map(geserka[m + 12], 0, 300, 0, 1023));
    Dynamixel.move(DXL[13], map(geserka[m + 13], 0, 300, 0, 1023));
    Dynamixel.move(DXL[14], map(geserka[m + 14], 0, 300, 0, 1023));
    Dynamixel.move(DXL[15], map(geserka[m + 15], 0, 300, 0, 1023));
    Dynamixel.move(DXL[16], map(geserka[m + 16], 0, 300, 0, 1023));
    Dynamixel.move(DXL[17], map(geserka[m + 17], 0, 300, 0, 1023));
    //delay(2000);
  }
}
