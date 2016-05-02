int I = PIN_B0;
int J = PIN_B1;
int L = PIN_B2;
int K = PIN_B3;
int D = PIN_B7;
int S = PIN_D0;
int Q = PIN_D1;
int E = PIN_D2;
int O = PIN_D3;
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
 int treatValue(int data) {
  return data;
 }
 void getJoystick()
 {
  value1 = analogRead(joyPin1);
  
  value2 = analogRead(joyPin2);
  
  value3 = analogRead(joyPin3);
  
  value4 = analogRead(joyPin4);
  
  if(treatValue(value3) > 600)
    xReading = xReading - ((treatValue(value3)- 600)/10);
  else if(treatValue(value3) < 400)
     xReading = xReading + (-1)*((treatValue(value3)- 400)/10);
  if(treatValue(value4) > 600)
    yReading = yReading - ((treatValue(value4)- 600)/10);
  else if(treatValue(value4) < 400)
     yReading = yReading + (-1)*((treatValue(value4)- 400)/10);
 }
void loop()                     
{
  
  getJoystick();
  Mouse.move(xReading, yReading, 0);
  xReading = 0;
  yReading = 0;
  int DL = 25;
  digitalWrite(PIN_D6,HIGH);
  while(true)
  {
    delay(DL);
    if (!digitalRead(I))
   {
     Keyboard.press(KEY_I);
   }   else
   {
    Keyboard.release(KEY_I);
   }
   if (!digitalRead(J))
   {
     Keyboard.press(KEY_J);
   }   else
   {
    Keyboard.release(KEY_J);
   }
   if (!digitalRead(L))
   {
     Keyboard.press(KEY_L);
   }   else
   {
    Keyboard.release(KEY_L);
   }
   if (!digitalRead(K))
   {
     Keyboard.press(KEY_K);
   }   else
   {
    Keyboard.release(KEY_K);
   }
   if (!digitalRead(S) || (treatValue(value2) > 600))
   {
     Keyboard.press(KEY_S);
   }   else
   {
    Keyboard.release(KEY_S);
   }
   if (!digitalRead(D) ||(treatValue(value1) > 600))
   {
     Keyboard.press(KEY_D);
   }   else
   {
    Keyboard.release(KEY_D);
   }
   if (!digitalRead(A) || (treatValue(value1) < 400))
   {
     Keyboard.press(KEY_A);
   }   else
   {
    Keyboard.release(KEY_A);
   }
   if (!digitalRead(W) ||(treatValue(value2) < 400))
   {
     Keyboard.press(KEY_W);
   }   else
   {
    Keyboard.release(KEY_W);
   }
   if (!digitalRead(F))
   {
     Keyboard.press(KEY_F);
   }   else
   {
    Keyboard.release(KEY_F);
   }
   if (!digitalRead(H))
   {
     Keyboard.press(KEY_H);
   }   else
   {
    Keyboard.release(KEY_H);
   }
   if (!digitalRead(Q))
   {
     Keyboard.press(KEY_Q);
   }   else
   {
    Keyboard.release(KEY_Q);
   }
   if (!digitalRead(E))
   {
     Keyboard.press(KEY_E);
   }   else
   {
    Keyboard.release(KEY_E);
   }
   if (!digitalRead(U))
   {
     Keyboard.press(KEY_U);
   }   else
   {
    Keyboard.release(KEY_U);
   }
   if (!digitalRead(O))
   {
     Keyboard.press(KEY_O);
   }   else
   {
    Keyboard.release(KEY_O);
   }
   if( 
   digitalRead(Q) &&
   digitalRead(E) &&
   digitalRead(H) &&
   digitalRead(F) &&
   digitalRead(U) &&
   digitalRead(O) &&
   digitalRead(I) &&
   digitalRead(K) &&
   digitalRead(J) &&
   digitalRead(L) &&
   digitalRead(W) &&
   digitalRead(S) &&
   digitalRead(D) &&
   digitalRead(A)
     )
   {
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
}

