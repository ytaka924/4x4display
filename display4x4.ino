// set define
#define H HIGH
#define L LOW

// set pin numbers
const int P0 = 9;
const int P1 = 8;
const int P2 = 7;
const int P3 = 6;

const int M0 = 10;
const int M1 = 16;
const int M2 = 14;
const int M3 = 15;

const int interval = 1;
int i;

void setup() {
  pinMode(P0, OUTPUT);
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
}

void loop() {
  i = 0;
  while(i < 100)
  {
    P_Upper();
    i++;
  }
  
  i = 0;
  while(i < 100)
  {
    F_Upper();
    i++;
  }
  
    i = 0;
  while(i < 100)
  {
    U_Upper();
    i++;
  }
  
//  a();
//  delay(5000);
//  y();
//  delay(1000);
//  m();
//  delay(1000);
}

void LED(uint8_t p0_out, uint8_t p1_out, uint8_t p2_out, uint8_t p3_out,
  uint8_t m0_out, uint8_t m1_out, uint8_t m2_out, uint8_t m3_out) {
  digitalWrite(P0, p0_out);
  digitalWrite(P1, p1_out);
  digitalWrite(P2, p2_out);
  digitalWrite(P3, p3_out);
  digitalWrite(M0, m0_out);
  digitalWrite(M1, m1_out);
  digitalWrite(M2, m2_out);
  digitalWrite(M3, m3_out);
  delay(interval);
}

void LED1_1() {LED(H,L,L,L,L,H,H,H);}
void LED1_2() {LED(H,L,L,L,H,L,H,H);}
void LED1_3() {LED(H,L,L,L,H,H,L,H);}
void LED1_4() {LED(H,L,L,L,H,H,H,L);}

void LED2_1() {LED(L,H,L,L,L,H,H,H);}
void LED2_2() {LED(L,H,L,L,H,L,H,H);}
void LED2_3() {LED(L,H,L,L,H,H,L,H);}
void LED2_4() {LED(L,H,L,L,H,H,H,L);}

void LED3_1() {LED(L,L,H,L,L,H,H,H);}
void LED3_2() {LED(L,L,H,L,H,L,H,H);}
void LED3_3() {LED(L,L,H,L,H,H,L,H);}
void LED3_4() {LED(L,L,H,L,H,H,H,L);}

void LED4_1() {LED(L,L,L,H,L,H,H,H);}
void LED4_2() {LED(L,L,L,H,H,L,H,H);}
void LED4_3() {LED(L,L,L,H,H,H,L,H);}
void LED4_4() {LED(L,L,L,H,H,H,H,L);}

void a() {
  LED1_1();
  LED1_2();
  LED1_3();
  LED1_4();
  LED2_2();
  LED2_3();
  LED3_1();
  LED3_2();
  LED3_3();
  LED3_4();
  LED4_1();
  LED4_2();
  LED4_4();
}

void y() {
  LED1_1();
  LED1_3();
  LED2_1();
  LED2_2();
  LED2_3();
  LED2_4();
  LED3_1();
  LED3_3();
  LED3_4();
  LED4_3();
}

void m() {
  LED1_1();
  LED1_2();
  LED2_2();
  LED2_4();
  LED3_1();
  LED3_2();
  LED3_3();
  LED3_4();
  LED4_1();
  LED4_2();
  LED4_4();
}

void P_Upper() {
  LED1_1();
  LED1_2();
  LED1_3();
  LED1_4();
  LED2_1();
  LED2_2();
//  LED2_3();
  LED2_4();
  LED3_1();
  LED3_2();
  LED3_3();
  LED3_4();
  LED4_1();
  LED4_2();
//  LED4_3();
//  LED4_4();
}

void F_Upper() {
  LED1_1();
  LED1_2();
  LED1_3();
  LED1_4();
  LED2_1();
  LED2_2();
//  LED2_3();
//  LED2_4();
  LED3_1();
  LED3_2();
  LED3_3();
  LED3_4();
  LED4_1();
  LED4_2();
//  LED4_3();
//  LED4_4();
}

void U_Upper() {
  LED1_1();
  LED1_2();
//  LED1_3();
  LED1_4();
  LED2_1();
  LED2_2();
//  LED2_3();
  LED2_4();
  LED3_1();
  LED3_2();
// LED3_3();
  LED3_4();
  LED4_1();
  LED4_2();
  LED4_3();
  LED4_4();
}

void arfaA() {
  LED1_1();
  LED1_2();
  LED1_3();
  LED1_4();
//  LED2_1();
  LED2_2();
  LED2_3();
//  LED2_4();
//  LED3_1();
  LED3_2();
  LED3_3();
//  LED3_4();
  LED4_1();
  LED4_2();
  LED4_3();
  LED4_4();
}
