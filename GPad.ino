void setup()   {                
  Serial.begin(9600);
  pinMode(PIN_F0, INPUT_PULLUP);
  pinMode(PIN_F1, INPUT_PULLUP);
  pinMode(PIN_F4, INPUT_PULLUP);
  pinMode(PIN_F5, INPUT_PULLUP);
  pinMode(PIN_F6, INPUT_PULLUP);
  pinMode(PIN_F7, INPUT_PULLUP);
  pinMode(PIN_B6, INPUT_PULLUP);
  pinMode(PIN_B5, INPUT_PULLUP);
  pinMode(PIN_B4, INPUT_PULLUP);
  pinMode(PIN_D7, INPUT_PULLUP);
  pinMode(PIN_B0, INPUT_PULLUP);
  pinMode(PIN_B1, INPUT_PULLUP);
  pinMode(PIN_B2, INPUT_PULLUP);
  pinMode(PIN_B3, INPUT_PULLUP);
  pinMode(PIN_D6, OUTPUT);
}

void loop()                     
{
  int DL = 50;
  digitalWrite(PIN_D6,HIGH);
  while(true)
  {
    delay(DL);
    if (!digitalRead(PIN_F0))
   {
     Keyboard.press(KEY_I);
   }   else
   {
    Keyboard.release(KEY_I);
   }
   if (!digitalRead(PIN_F1))
   {
     Keyboard.press(KEY_J);
   }   else
   {
    Keyboard.release(KEY_J);
   }
   if (!digitalRead(PIN_F4))
   {
     Keyboard.press(KEY_L);
   }   else
   {
    Keyboard.release(KEY_L);
   }
   if (!digitalRead(PIN_F5))
   {
     Keyboard.press(KEY_K);
   }   else
   {
    Keyboard.release(KEY_K);
   }
   if (!digitalRead(PIN_F6))
   {
     Keyboard.press(KEY_S);
   }   else
   {
    Keyboard.release(KEY_S);
   }
   if (!digitalRead(PIN_F7))
   {
     Keyboard.press(KEY_D);
   }   else
   {
    Keyboard.release(KEY_D);
   }
   if (!digitalRead(PIN_B6))
   {
     Keyboard.press(KEY_A);
   }   else
   {
    Keyboard.release(KEY_A);
   }
   if (!digitalRead(PIN_B5))
   {
     Keyboard.press(KEY_W);
   }   else
   {
    Keyboard.release(KEY_W);
   }
   if (!digitalRead(PIN_B4))
   {
     Keyboard.press(KEY_F);
   }   else
   {
    Keyboard.release(KEY_F);
   }
   if (!digitalRead(PIN_D7))
   {
     Keyboard.press(KEY_H);
   }   else
   {
    Keyboard.release(KEY_H);
   }
   if (!digitalRead(PIN_B0))
   {
     Keyboard.press(KEY_Q);
   }   else
   {
    Keyboard.release(KEY_Q);
   }
   if (!digitalRead(PIN_B1))
   {
     Keyboard.press(KEY_E);
   }   else
   {
    Keyboard.release(KEY_E);
   }
   if (!digitalRead(PIN_B2))
   {
     Keyboard.press(KEY_U);
   }   else
   {
    Keyboard.release(KEY_U);
   }
   if (!digitalRead(PIN_B3))
   {
     Keyboard.press(KEY_O);
   }   else
   {
    Keyboard.release(KEY_O);
   }
   if( 
   digitalRead(PIN_F0) &&
   digitalRead(PIN_F1) &&
   digitalRead(PIN_F4) &&
   digitalRead(PIN_F5) &&
   digitalRead(PIN_F6) &&
   digitalRead(PIN_F7) &&
   digitalRead(PIN_B6) &&
   digitalRead(PIN_B5) &&
   digitalRead(PIN_B4) &&
   digitalRead(PIN_D7) &&
   digitalRead(PIN_B0) &&
   digitalRead(PIN_B1) &&
   digitalRead(PIN_B2) &&
   digitalRead(PIN_B3)
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
