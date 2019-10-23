class ping{
  int pingPin;
  long duration,cm;
  public:
  ping(int pin){
    pingPin=pin;
  }
  int ukur(){
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPin, LOW);
    pinMode(pingPin, INPUT);
    duration = pulseIn(pingPin, HIGH);
    cm = duration/29/2;
    if(cm>230){
      cm=230;
    }
    return cm;
  }
};
