int I = PIN_F4;
int J = PIN_F7;
int L = PIN_F5;
int K = PIN_F6;
int D = PIN_B7;
int S = PIN_D0;
int Q = PIN_B2;
int E = PIN_B1;
int O = PIN_F1;
int U = PIN_F0;
int W = PIN_B0;
int A = PIN_B3;
int H = PIN_D4;
int F = PIN_D5;
int C = PIN_E6;
int V = PIN_E6;
int mu = PIN_B6;
int md = PIN_B5;
int ml = PIN_B4;
int mr = PIN_D7;
int up = PIN_D1;
int down = PIN_C6;
int left = PIN_C7;
int right = PIN_D6;

bool GameMode = false;
bool GameModeSet = true;
bool GameModeLock = true;
bool GameModeLockSet = true;
int xReading; 
int yReading;
int DP = 3;
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
  pinMode(C, INPUT_PULLUP);
  pinMode(PIN_D6, INPUT_PULLUP);
  pinMode(up, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  pinMode(mu, INPUT_PULLUP);
  pinMode(md, INPUT_PULLUP);
  pinMode(ml, INPUT_PULLUP);
  pinMode(mr, INPUT_PULLUP);
}

void loop()                     
{
  int DL = 5;
  while(true)
  {
    delay(DL);
    Mouse.move(xReading, yReading, 0);
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
     Mouse.set_buttons(1, 0, 0);
      //digitalWrite(PIN_D6,HIGH);
     delay(10);
     }
   }else{
    if (!digitalRead(Q) &&!GameMode)
      Mouse.set_buttons(0,0,1);
    else
      Mouse.set_buttons(0,0,0);
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
     Keyboard.press(KEY_I);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_I);
   }
   if (!digitalRead(V)&&!digitalRead(H))
   {
     Keyboard.press(KEY_V);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_V);
   }
   if (!digitalRead(C)&&!digitalRead(F))
   {
     Keyboard.press(KEY_C);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_C);
   }
   
  // DIRECTIONS
   if (!digitalRead(down))
   {
     Keyboard.press(KEY_DOWN);
   }else{
     Keyboard.release(KEY_DOWN);
   }
   if (!digitalRead(right))
   {
     Keyboard.press(KEY_RIGHT);
   }else{
     Keyboard.release(KEY_RIGHT);
   }
   if (!digitalRead(up))
   {
     Keyboard.press(KEY_UP);
   }else{
     Keyboard.release(KEY_UP);
   }
   if (!digitalRead(left))
   {
     Keyboard.press(KEY_LEFT);
   }else{
     Keyboard.release(KEY_LEFT);
   }
   
  //MOUSE
     if (!digitalRead(mu))
   {
     yReading = 0-DP;
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    if (!digitalRead(md))
    {
      yReading = DP;
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     yReading = 0;
     }
   }
   if (!digitalRead(ml))
   {
     xReading = 0-DP;
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    if (!digitalRead(mr))
    {
      xReading = DP;
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     xReading = 0;
    }
   }
   //end of mouse
   if (!digitalRead(J))
   {
     Keyboard.press(KEY_J);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_J);
   }
   if (!digitalRead(L))
   {
     Keyboard.press(KEY_L);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_L);
   }
   if (!digitalRead(K))
   {
     Keyboard.press(KEY_K);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_K);
   }
   if (!digitalRead(S))
   {
     Keyboard.press(KEY_S);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_S);
   }   
   if (!digitalRead(D))
   {
     Keyboard.press(KEY_D);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_D);
   }
   if (!digitalRead(A))
   {
     Keyboard.press(KEY_A);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_A);
   }
   if (!digitalRead(W))
   {
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
     Keyboard.press(KEY_ENTER);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_ENTER);
   }
   if(GameMode){
    if (!digitalRead(Q))
    {
      Keyboard.press(KEY_Q);
       //digitalWrite(PIN_D6,HIGH);
    }   else
    {
     Keyboard.release(KEY_Q);
    }
   }
   if (!digitalRead(E))
   {
     Keyboard.press(KEY_E);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_E);
   }
   if (!digitalRead(U))
   {
     Keyboard.press(KEY_U);
      //digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_U);
   }
   if(GameMode){
    if (!digitalRead(O))
    {
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

