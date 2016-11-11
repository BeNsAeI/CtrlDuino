#include <SoftwareSerial.h>
SoftwareSerial Genotronex(PIN_D2, PIN_D3);
int BluetoothData;
int LED = PIN_D6
int xReading; 
int yReading;
int DP = 3;
void setup()   {                
  Mouse.begin();
  Serial.begin(9600);
  Genotronex.begin(9600);
  Genotronex.println("Connected...");
  pinMode(PIN_D6, OUTPUT);

}

void loop()                     
{
  int DL = 5;
  while(true)
  {
    delay(DL);
    Mouse.move(xReading, yReading, 0);
    if (Genotronex.available())
      BluetoothData=Genotronex.read();
    if (!digitalRead(O))
   {
    if(!digitalRead(Q)&& !GameMode && GameModeSet && !GameModeLock)
    {
      GameMode = true;
      GameModeSet = false;
    }
    if(!digitalRead(Q)&& GameMode && GameModeSet && !GameModeLock)
    {
      GameMode = false;
      GameModeSet = false;
    }
    if(!GameMode){
      Genotronex.println("Left Click");
     Mouse.set_buttons(1, 0, 0);
      //digitalWrite(PIN_D6,HIGH);
     delay(10);
     }
   }else{
    if (!digitalRead(Q) &&!GameMode){
      Genotronex.println("Right Click");
      Mouse.set_buttons(0,0,1);
    }else{
      Mouse.set_buttons(0,0,0);
    }
   }
   if (!digitalRead(Q))
   {
    if(!digitalRead(O)&& !GameMode && GameModeSet && !GameModeLock)
    {
      GameMode = true;
      GameModeSet = false;
    }
    if(!digitalRead(O)&& GameMode && GameModeSet && !GameModeLock)
    {
      GameMode = false;
      GameModeSet = false;
    }
    if(!GameMode){
      //digitalWrite(PIN_D6,HIGH);
     Mouse.set_buttons(0, 0, 1);
     delay(10);
    }
   }else{
    if (!digitalRead(O) && !GameMode)
      Mouse.set_buttons(1,0,0);
    else
      Mouse.set_buttons(0,0,0);
   }
    if (!digitalRead(I))
   {
    Genotronex.println("I");
     Keyboard.press(KEY_I);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_I);
   }
   if (!digitalRead(V)&&!digitalRead(H))
   {
    Genotronex.println("V");
     Keyboard.press(KEY_V);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_V);
   }
   if (!digitalRead(C)&&!digitalRead(F))
   {
    Genotronex.println("C");
     Keyboard.press(KEY_C);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_C);
   }
   
  // DIRECTIONS
   if (!digitalRead(down))
   {
    Genotronex.println("DOWN");
     Keyboard.press(KEY_DOWN);
   }else{
     Keyboard.release(KEY_DOWN);
   }
   if (!digitalRead(right))
   {
    Genotronex.println("RIGHT");
     Keyboard.press(KEY_RIGHT);
   }else{
     Keyboard.release(KEY_RIGHT);
   }
   if (!digitalRead(up))
   {
    Genotronex.println("UP");
     Keyboard.press(KEY_UP);
   }else{
     Keyboard.release(KEY_UP);
   }
   if (!digitalRead(left))
   {
    Genotronex.println("LEFT");
     Keyboard.press(KEY_LEFT);
   }else{
     Keyboard.release(KEY_LEFT);
   }
   
  //MOUSE
     if (!digitalRead(mu))
   {
     yReading = 0-DP;
     Genotronex.println(yReading);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    if (!digitalRead(md))
    {
      yReading = DP;
      Genotronex.println(yReading);
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     yReading = 0;
     }
   }
   if (!digitalRead(ml))
   {
     xReading = 0-DP;
     Genotronex.println(xReading);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    if (!digitalRead(mr))
    {
      xReading = DP;
      Genotronex.println(xReading);
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     xReading = 0;
    }
   }
   //end of mouse
   if (!digitalRead(J))
   {
    Genotronex.println("J");
     Keyboard.press(KEY_J);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_J);
   }
   if (!digitalRead(L))
   {
    Genotronex.println("L");
     Keyboard.press(KEY_L);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_L);
   }
   if (!digitalRead(K))
   {
    Genotronex.println("K");
     Keyboard.press(KEY_K);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_K);
   }
   if (!digitalRead(S))
   {
    Genotronex.println("S");
     Keyboard.press(KEY_S);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_S);
   }   
   if (!digitalRead(D))
   {
    Genotronex.println("D");
     Keyboard.press(KEY_D);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_D);
   }
   if (!digitalRead(A))
   {
    Genotronex.println("A");
     Keyboard.press(KEY_A);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_A);
   }
   if (!digitalRead(W))
   {
    Genotronex.println("W");
     Keyboard.press(KEY_W);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_W);
   }
   if (!digitalRead(F) && !(!digitalRead(C)))
   {
    if(!digitalRead(H) && GameModeLockSet)
    {
      if(GameModeLock)
       GameModeLock = false;
      else
        GameModeLock = true;
      GameModeLockSet = false;
    }
    Genotronex.println("BACKSPACE");
     Keyboard.press(KEY_BACKSPACE);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_BACKSPACE);
   }
   if (!digitalRead(H)&& !(!digitalRead(V)))
   {
    if(!digitalRead(F) && GameModeLockSet)
    {
      if(GameModeLock)
        GameModeLock = false;
      else
        GameModeLock = true;
      GameModeLockSet = false;
    }
    Genotronex.println("ENTER");
     Keyboard.press(KEY_ENTER);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_ENTER);
   }
   if(GameMode){
    if (!digitalRead(Q))
    {
      Genotronex.println("Q");
      Keyboard.press(KEY_Q);
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     Keyboard.release(KEY_Q);
    }
   }
   if (!digitalRead(E))
   {
    Genotronex.println("E");
     Keyboard.press(KEY_E);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_E);
   }
   if (!digitalRead(U))
   {
    Genotronex.println("U");
     Keyboard.press(KEY_U);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_U);
   }
   if(GameMode){
    if (!digitalRead(O))
    {
      Genotronex.println("O");
      Keyboard.press(KEY_O);
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     Keyboard.release(KEY_O);
    }
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
   digitalRead(A) &&
   digitalRead(V) &&
   digitalRead(C) &&
   digitalRead(up) &&
   digitalRead(down) &&
   digitalRead(left) &&
   digitalRead(right)
     )
   {
      Mouse.set_buttons(0, 0, 0);
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
  Keyboard.release(KEY_BACKSPACE);
  Keyboard.release(KEY_ENTER);
  Keyboard.release(KEY_Q);
  Keyboard.release(KEY_E);
  Keyboard.release(KEY_U);
  Keyboard.release(KEY_O);
  Keyboard.release(KEY_C);
  Keyboard.release(KEY_V);
  Keyboard.release(KEY_UP);
  Keyboard.release(KEY_DOWN);
  Keyboard.release(KEY_LEFT);
  Keyboard.release(KEY_RIGHT);
  Mouse.set_buttons(0, 0, 0);

  GameModeSet = true;
  GameModeLockSet = true;
}

