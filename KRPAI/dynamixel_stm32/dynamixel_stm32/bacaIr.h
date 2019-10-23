class bacaIR {
    int pinIR;
    int hasil;
    int Nt;
    int Nr;
    int Jt;
    int Jr;
  public:
    bacaIR(int pin, int nt, int nr, int jr, int jt) {
      pinIR = pin;
      Nt = nt;
      Nr = nr;
      Jr = jr;
      Jt = jt;

      pinMode(pinIR, INPUT);

    }
    int ukur() {
      hasil = analogRead(pinIR);
      hasil = map(hasil, Nt, Nr, Jr, Jt);
      return hasil;
    }
};
