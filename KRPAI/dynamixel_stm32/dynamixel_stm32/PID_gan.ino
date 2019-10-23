void PIDki(int ki, int ski, int dki, int dka) {
  if ((dki < 25) || (dka < 25)) {
    putarKa();
    belok = true;
    karpet = false;
    masukruang = false;
    hitam = false;
  }
  /*else if ((ki < 10) && (ski < 12)) {
    geserKa();
    }*/
  else {
    belok = false;
    for (int m = 0; m < 127; m = m + 18) {
      if (ki < ski) {
        error = 10 - ki;
      }
      else {
        error = 12 - ski;
      }
      //pv = min(ki, ski);
      //error = sp - pv;
      outp = (int)error * kpki;
      /*outi = (int)(integral * kiki) / ti;
        if (error != 0) {
        integral = integral + error;
        }
        else {
        integral = 0;
        }
        if (outi > imax) {
        outi = imax;
        }
        if (outi < -(imax)) {
        outi = -(imax);
        }*/
      outd = (int)(error - errors) * kdki;
      pidki = outp + outi + outd;
      if (pidki < -80) {
        pidki = -80;
      }
      else if (pidki > 60) {
        pidki = 60;
      }
      errors = error;
      if (pidki < -30) {
        pidki = pidki + 50;
      }
      if (pidki <= 0) {
        kaki1 = map(pidki, -80, 0, 117, 137);
        kaki7 = map(pidki, -80, 0, 98, 118);
        kaki4 = map(pidki, -80, 0, 107, 127);
        kaki10 = map(pidki, -80, 0, 137, 177);
      }
      else {
        kaki1 = map(pidki, 0, 60, 137, 177);
        kaki7 = map(pidki, 0, 60, 118, 158);
        kaki4 = map(pidki, 0, 60, 127, 167);
        kaki10 = map(pidki, 0, 60, 177, 197);
      }
      if (pidki < 0) {
        kaki13 = map(pidki, -80, 0, 107, 167);
        kaki16 = map(pidki, -80, 0, 89, 159);;
      }
      else {
        kaki13 = map(pidki, 0, 60, 167, 187);
        kaki16 = map(pidki, 0, 60, 159, 179);
      }
      maju[18] = kaki1;//177 //kaki1
      maju[36] = kaki1;
      maju[24] = kaki7;//158 //kaki7
      maju[42] = kaki7;
      maju[30] = kaki13;//167 //kaki13
      maju[48] = kaki13;
      maju[93] = kaki4; //kaki4
      maju[111] = kaki4;
      maju[99] = kaki10; //kaki10
      maju[117] = kaki10;
      maju[105] = kaki16; //kaki16
      maju[123] = kaki16;
      /*if (millis() > Ts + 2000) {
        Ts = millis();
        Serial.print(pidki);
        Serial.print(" ");
        Serial.print(maju[18]);
        Serial.print(" ");
        Serial.print(maju[24]);
        Serial.print(" ");
        Serial.print(maju[30]);
        Serial.print(" ");
        Serial.print(maju[93]);
        Serial.print(" ");
        Serial.print(maju[99]);
        Serial.print(" ");
        Serial.print(maju[105]);
        Serial.println(" ");
        }*/
      Dynamixel.move(DXL[0], map(maju[m], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[1], map(maju[m + 1], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[2], map(maju[m + 2], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[3], map(maju[m + 3], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[4], map(maju[m + 4], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[5], map(maju[m + 5], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[6], map(maju[m + 6], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[7], map(maju[m + 7], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[8], map(maju[m + 8], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[9], map(maju[m + 9], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[10], map(maju[m + 10], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[11], map(maju[m + 11], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[12], map(maju[m + 12], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[13], map(maju[m + 13], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[14], map(maju[m + 14], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[15], map(maju[m + 15], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[16], map(maju[m + 16], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[17], map(maju[m + 17], 0, 300, 0, 1023) );
      bacaWL();
      if (wl == 4095) {
        masukruang = true;
        karpet = false;
        hitam = false;
      }
      else if (3800 < wl < 4000) {
        karpet = true;
        masukruang = false;
        hitam = false;
      }
      else {
        hitam = true;
        karpet = false;
        masukruang = false;
      }
//      delay(15);
    }
  }

}
void PIDka(int ka, int ska, int dki, int dka) {
  if ((dki < 25) || (dka < 25)) {
    putarKi();
    belok = true;
    karpet = false;
    masukruang = false;
    hitam = false;
  }
  /*else if ((ki < 10) && (ski < 12)) {
    geserKa();
    }*/
  else {
    belok = false;
    for (int m = 0; m < 127; m = m + 18) {
      if (ka < ska) {
        error = 10 - ka;
      }
      else {
        error = 12 - ska;
      }
      //pv = min(ki, ski);
      //error = sp - pv;
      outp = (int)error * kpki;
      /*outi = (int)(integral * kiki) / ti;
        if (error != 0) {
        integral = integral + error;
        }
        else {
        integral = 0;
        }
        if (outi > imax) {
        outi = imax;
        }
        if (outi < -(imax)) {
        outi = -(imax);
        }*/
      outd = (int)(error - errors) * kdki;
      pidki = outp + outi + outd;
      if (pidki < -80) {
        pidki = -80;
      }
      else if (pidki > 80) {
        pidki = 80;
      }
      errors = error;
      if (pidki < -30) {
        pidki = pidki + 50;
      }
      if (pidki <= 0) {
        kaki1 = map(pidki, -80, 0, 177, 137);
        kaki7 = map(pidki, -80, 0, 159, 119);
        kaki4 = map(pidki, -80, 0, 168, 128);
        kaki10 = map(pidki, -80, 0, 197, 177);
      }
      else {
        kaki1 = map(pidki, 0, 80, 137, 107);
        kaki7 = map(pidki, 0, 80, 119, 98);
        kaki4 = map(pidki, 0, 80, 128, 108);
        kaki10 = map(pidki, 0, 80, 177, 157);
      }
      if (pidki < 0) {
        kaki13 = map(pidki, -80, 0, 187, 167);
        kaki16 = map(pidki, -80, 0, 179, 159);;
      }
      else {
        kaki13 = map(pidki, 0, 80, 167, 127);
        kaki16 = map(pidki, 0, 80, 159, 109);
      }
      maju[18] = kaki1;//177 //kaki1
      maju[36] = kaki1;
      maju[24] = kaki7;//158 //kaki7
      maju[42] = kaki7;
      maju[30] = kaki13;//167 //kaki13
      maju[48] = kaki13;
      maju[93] = kaki4; //kaki4
      maju[111] = kaki4;
      maju[99] = kaki10; //kaki10
      maju[117] = kaki10;
      maju[105] = kaki16; //kaki16
      maju[123] = kaki16;
      /*if (millis() > Ts + 2000) {
        Ts = millis();
        Serial.print(pidki);
        Serial.print(" ");
        Serial.print(maju[18]);
        Serial.print(" ");
        Serial.print(maju[24]);
        Serial.print(" ");
        Serial.print(maju[30]);
        Serial.print(" ");
        Serial.print(maju[93]);
        Serial.print(" ");
        Serial.print(maju[99]);
        Serial.print(" ");
        Serial.print(maju[105]);
        Serial.println(" ");
        }*/
      Dynamixel.move(DXL[0], map(maju[m], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[1], map(maju[m + 1], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[2], map(maju[m + 2], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[3], map(maju[m + 3], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[4], map(maju[m + 4], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[5], map(maju[m + 5], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[6], map(maju[m + 6], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[7], map(maju[m + 7], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[8], map(maju[m + 8], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[9], map(maju[m + 9], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[10], map(maju[m + 10], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[11], map(maju[m + 11], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[12], map(maju[m + 12], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[13], map(maju[m + 13], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[14], map(maju[m + 14], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[15], map(maju[m + 15], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[16], map(maju[m + 16], 0, 300, 0, 1023) );
      Dynamixel.move(DXL[17], map(maju[m + 17], 0, 300, 0, 1023) );
      bacaWL();
      if (wl == 4095) {
        masukruang = true;
        karpet = false;
        hitam = false;
      }
      else if (3800 < wl < 4000) {
        karpet = true;
        masukruang = false;
        hitam = false;
      }
      else {
        hitam = true;
        karpet = false;
        masukruang = false;
      }
      //delay(15);
    }
  }

}
