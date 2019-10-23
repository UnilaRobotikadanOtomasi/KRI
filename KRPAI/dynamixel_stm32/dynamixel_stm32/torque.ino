void torsion() {
  for (int i = 0; i<18; i++) {
    Dynamixel.setMaxTorque(DXL[i],1023);
  }
}
void torsioff() {
  for (int i = 0; i <18; i++) {
    Dynamixel.setMaxTorque(DXL[i],0);
  }
}
void pingdxl() {
  for (int i = 0; i < 18; i++) {
    Dynamixel.ping(DXL[i]);
  }
}
void torsionKa() {
  Dynamixel.setMaxTorque(DXL[0],1023);
  Dynamixel.setMaxTorque(DXL[1],1023);
  Dynamixel.setMaxTorque(DXL[2],1023);
  Dynamixel.setMaxTorque(DXL[3],0);
  Dynamixel.setMaxTorque(DXL[4],0);
  Dynamixel.setMaxTorque(DXL[5],0);
  Dynamixel.setMaxTorque(DXL[6],1023);
  Dynamixel.setMaxTorque(DXL[7],1023);
  Dynamixel.setMaxTorque(DXL[8],1023);
  Dynamixel.setMaxTorque(DXL[9],0);
  Dynamixel.setMaxTorque(DXL[10],0);
  Dynamixel.setMaxTorque(DXL[11],0);
  Dynamixel.setMaxTorque(DXL[12],1023);
  Dynamixel.setMaxTorque(DXL[13],1023);
  Dynamixel.setMaxTorque(DXL[14],1023);
  Dynamixel.setMaxTorque(DXL[15],0);
  Dynamixel.setMaxTorque(DXL[16],0);
  Dynamixel.setMaxTorque(DXL[17],0);
}
void torsionKi() {
  Dynamixel.setMaxTorque(DXL[0],0);
  Dynamixel.setMaxTorque(DXL[1],0);
  Dynamixel.setMaxTorque(DXL[2],0);
  Dynamixel.setMaxTorque(DXL[3],1023);
  Dynamixel.setMaxTorque(DXL[4],1023);
  Dynamixel.setMaxTorque(DXL[5],1023);
  Dynamixel.setMaxTorque(DXL[6],0);
  Dynamixel.setMaxTorque(DXL[7],0);
  Dynamixel.setMaxTorque(DXL[8],0);
  Dynamixel.setMaxTorque(DXL[9],1023);
  Dynamixel.setMaxTorque(DXL[10],1023);
  Dynamixel.setMaxTorque(DXL[11],1023);
  Dynamixel.setMaxTorque(DXL[12],0);
  Dynamixel.setMaxTorque(DXL[13],0);
  Dynamixel.setMaxTorque(DXL[14],0);
  Dynamixel.setMaxTorque(DXL[15],1023);
  Dynamixel.setMaxTorque(DXL[16],1023);
  Dynamixel.setMaxTorque(DXL[17],1023);
}
