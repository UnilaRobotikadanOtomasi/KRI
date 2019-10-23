void bacaWL() {
  analogReadResolution(12);
  wl = analogRead(pinwl);
  //Serial.println(wl);
}
