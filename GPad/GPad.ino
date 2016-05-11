int I = PIN_B0;
int J = PIN_B1;
int L = PIN_B2;
int K = PIN_B3;
int D = PIN_B7;
int S = PIN_D0;
int Q = PIN_D2;
int E = PIN_D3;
int O = PIN_D1;
int U = PIN_C6;
int W = PIN_F0;
int A = PIN_F1;
int H = PIN_F4;
int F = PIN_F5;
int xReading;
int yReading;
int DP = 1;
int joyPin1 = PIN_B6;                 // slider variable connecetd to analog pin 0
int joyPin2 = PIN_F7;                 // slider variable connecetd to analog pin 1
int joyPin3 = PIN_B4;                 // slider variable connecetd to analog pin 2
int joyPin4 = PIN_B5;                 // slider variable connecetd to analog pin 3
int value1 = 0;                  // variable to read the value from the analog pin 0
int value2 = 0;                  // variable to read the value from the analog pin 1
int value3 = 0;                  // variable to read the value from the analog pin 2
int value4 = 0;                  // variable to read the value from the analog pin 3
void setup()   {                
  Mouse.begin();
  Serial.begin(9600);
  pinMode(Q, INPUT_PULLUP);
  pinMode(E, INPUT_PULLUP);
  pinMode(H, INPUT_PULLUP);
  pinMode(F, INPUT_PULLUP);
  pinMode(U, INPUT_PULLUP);
  pinMode(O, INPUT_PULLUP);
  pinMode(I, INPUT_PULLUP);
  pinMode(K, INPUT_PULLUP);
  pinMode(J, INPUT_PULLUP);
  pinMode(L, INPUT_PULLUP);
  pinMode(W, INPUT_PULLUP);
  pinMode(S, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(PIN_D6, OUTPUT);
}
 void getJoystick()
 {
  xReading = 0;
  yReading = 0;
  value1 = analogRead(joyPin1);
  
  value2 = analogRead(joyPin2);
  
  value3 = analogRead(joyPin3);
  
  value4 = analogRead(joyPin4);
  
  if((value3) > 600)
    xReading = xReading - (((value3)- 600)/20);
  else if((value3) < 400)
     xReading = xReading + (-1)*(((value3)- 400)/20);
  if((value4) > 600)
    yReading = yReading - (((value4)- 600)/20);
  else if((value4) < 400)
     yReading = yReading + (-1)*(((value4)- 400)/20);
 }
void loop()                     
{
  int DL = 25;
  getJoystick();
//  xReading = 0;
//  yReading = 0;
  digitalWrite(PIN_D6,LOW);
  while(true)
  {
    delay(DL);
    getJoystick();
    Mouse.move(xReading, yReading, 0);
    if (!digitalRead(O))
   {
     Mouse.set_buttons(1, 0, 0);
     digitalWrite(PIN_D6,HIGH);
     delay(250);
   }
   if (!digitalRead(Q))
   {
     digitalWrite(PIN_D6,HIGH);
     Mouse.set_buttons(0, 0, 1);
     delay(250);
   }
    if (!digitalRead(I))
   {
     Keyboard.press(KEY_I);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_I);
   }
   if (!digitalRead(J))
   {
     Keyboard.press(KEY_J);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_J);
   }
   if (!digitalRead(L))
   {
     Keyboard.press(KEY_L);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_L);
   }
   if (!digitalRead(K))
   {
     Keyboard.press(KEY_K);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_K);
   }
   if (!digitalRead(S))
   {
     Keyboard.press(KEY_S);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_S);
   }
   if (((value2) > 600))
   {
     Keyboard.press(KEY_DOWN);
     getJoystick();
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_DOWN);
   }
   
   if (!digitalRead(D))
   {
     Keyboard.press(KEY_D);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_D);
   }
   if (((value1) > 600))
   {
     Keyboard.press(KEY_RIGHT);
     getJoystick();
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_RIGHT);
   }
   if (!digitalRead(A))
   {
     Keyboard.press(KEY_A);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_A);
   }
      if (((value1) < 400))
   {
     Keyboard.press(KEY_LEFT);
     getJoystick();
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_LEFT);
   }
   if (!digitalRead(W))
   {
     Keyboard.press(KEY_W);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_W);
   }
    if (((value2) < 400))
   {
     Keyboard.press(KEY_UP);
     getJoystick();
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_UP);
   }
   if (!digitalRead(F))
   {
     Keyboard.press(KEY_F);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_F);
   }
   if (!digitalRead(H))
   {
     Keyboard.press(KEY_H);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_H);
   }
  /* if (!digitalRead(Q))
   {
     Keyboard.press(KEY_Q);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_Q);
   }*/
   if (!digitalRead(E))
   {
     Keyboard.press(KEY_E);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_E);
   }
   if (!digitalRead(U))
   {
     Keyboard.press(KEY_U);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_U);
   }/*
   if (!digitalRead(O))
   {
     Keyboard.press(KEY_O);
     digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_O);
   }*/
   if( 
   //digitalRead(Q) &&
   //digitalRead(E) &&
   digitalRead(H) &&
   digitalRead(F) &&
   //digitalRead(U) &&
   //digitalRead(O) &&
   digitalRead(I) &&
   digitalRead(K) &&
   digitalRead(J) &&
   digitalRead(L) &&
   digitalRead(W) &&
   digitalRead(S) &&
   digitalRead(D) &&
   digitalRead(A) &&
   !((value1) > 600) &&
   !((value2) > 600) &&
   !((value1) < 400) &&
   !((value2) < 400)
     )
   {
      getJoystick();
      digitalWrite(PIN_D6,LOW);
      break;
   }
  }
  Keyboard.release(KEY_I);
  Keyboard.release(KEY_J);
  Keyboard.release(KEY_L);
  Keyboard.release(KEY_K);
  Keyboard.release(KEY_S);
  Keyboard.release(KEY_D);
  Keyboard.release(KEY_A);
  Keyboard.release(KEY_W);
  Keyboard.release(KEY_F);
  Keyboard.release(KEY_H);
  Keyboard.release(KEY_Q);
  Keyboard.release(KEY_E);
  Keyboard.release(KEY_U);
  Keyboard.release(KEY_O);
  Keyboard.release(KEY_UP);
  Keyboard.release(KEY_DOWN);
  Keyboard.release(KEY_LEFT);
  Keyboard.release(KEY_RIGHT);
  Mouse.set_buttons(0, 0, 0);
  digitalWrite(PIN_D6,LOW);
}

