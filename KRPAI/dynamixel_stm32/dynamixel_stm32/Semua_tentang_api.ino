void bacaTPA() {
  for (int i = 1; i <= 8; i++) {
//    Serial.print(tpa.getPoint(i));
//    Serial.print(" ");
    if (tpa.getPoint(i) > 40) {
      titikapi = true;
      break;
    }
    else {
      titikapi = false;
    }
  }
//  Serial.println(" ");
}

void bacauv() {
  pinMode(pinuv, INPUT);
  if (digitalRead(pinuv) == 0) {
    ruangapi = true;
  }
  else {
    ruangapi = false;
  }
  /*if (millis() > Ts) {
    Ts = millis();
    Serial.println(ruangapi);
    }*/
}
