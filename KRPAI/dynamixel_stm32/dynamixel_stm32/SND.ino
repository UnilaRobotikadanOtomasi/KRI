void SND() {
  if (apipadam) {
    berdiri();
  }
  else {
    //PIDki(ping1.ukur(), ping2.ukur(), bacaIR1.ukur(), bacaIR2.ukur());
    if (masukruang) {
      ruang = ruang + 1;
      if (ruang == 1) {
        PIDki(ping1.ukur(), ping2.ukur(), bacaIR1.ukur(), bacaIR2.ukur());
        masukruang = false;
      }
      else {
        jmaju();
        jmaju();
        bacauv();
        while (ruangapi) {
          if (titikapi) {
            ruangapi = false;
            apipadam = true;
            masukruang = false;
          }
          else {
            putarKa();
            scanA();
          }
        }
        if (~ruangapi) {
          do {
            putarKa();
          } while (ping3.ukur() > 7 && ping4.ukur() > 5);
          jmaju();
          jmaju();
          masukruang = false;
        }
      }
    }
    else {
      PIDki(ping1.ukur(), ping2.ukur(), bacaIR1.ukur(), bacaIR2.ukur());
    }
  }
}
