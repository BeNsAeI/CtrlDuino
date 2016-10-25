int X = PIN_B0;
int Y = PIN_B1;
int A = PIN_B2;
int B = PIN_B3;

int R = PIN_B7;
int L = PIN_D0;


int enter = PIN_D1;
int bckspce = PIN_F0;
int rsm = PIN_F1;
int website = PIN_F4;
int up = PIN_F5;
int down = PIN_F6;
int left = PIN_F7;
int right = PIN_B6;

long double rsmdelay = 0;

void setup()   {                
  Serial.begin(9600);
  pinMode(PIN_D6, OUTPUT);
  pinMode(X, INPUT_PULLUP);
  pinMode(Y, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(R, INPUT_PULLUP);
  pinMode(L, INPUT_PULLUP);
  pinMode(enter, INPUT_PULLUP);
  pinMode(bckspce, INPUT_PULLUP);
  pinMode(rsm, INPUT_PULLUP);
  pinMode(website, INPUT_PULLUP);
  pinMode(up, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);

}

void loop()                     
{
  int DL = 25;
  while(true)
  {
    delay(DL);
    if (!digitalRead(X))
   {
     Keyboard.press(KEY_X);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_X);
   }
   //special keys
   if (!digitalRead(rsm))
   {
    if(rsmdelay > 4*DL)
    {
     Keyboard.press(MODIFIERKEY_GUI);
     Keyboard.press(KEY_R);
     delay(3*DL);
     Keyboard.release(MODIFIERKEY_GUI);
     Keyboard.release(KEY_R);
     delay(3*DL);
     Keyboard.print("notepad");
     delay(3*DL);
     Keyboard.press(KEY_ENTER);
     Keyboard.release(KEY_ENTER);
     delay(3*DL);
     Keyboard.println("Behnam Saeedi");
     Keyboard.println("Senior Computer Science");
     Keyboard.println("Anticipated graduation date: Spring of 2017 ");
     Keyboard.println("Email: Behnam.saeidi@gmail.com");
     Keyboard.println("Email: Saeedib@orgonstate.edu");
     Keyboard.println("Phone: 818-699-3803");
     Keyboard.println("Website: http://people.oregonstate.edu/~Saeedib/");
     Keyboard.println("");
     Keyboard.println("-----");
     Keyboard.println("");
     Keyboard.println("More about this platform: ");
     Keyboard.println("This project started as my personal DIY cheap fully programmable controller. The project is called CTRLDuino. The code for this project is available at Git (https://github.com/BeNsAeI/CtrlDuino/) and the files for 3D printing the case are available on thingiverse(http://www.thingiverse.com/thing:1551841). The controller was designed to be optimum for my purposes and comes in 4 flavors: Full size basic, Full size analog, Tiny and Resume. This version is the Resume. It was developed in order to increase my odds for getting your position, demo some of my skills and be a tool for playing retro games on computer emulators. The full size analog and Tiny versions have 26 fully programmable buttons that give you control over all of the keyboard and mouse functionalities. Furthermore, it does not require any third party drivers.");
     Keyboard.println("Hopefully this small demo helped by demonstrating a small portion of my abilities. Please feel free to contact me.");
     Keyboard.println("");
     Keyboard.println("Best regards, ");
     Keyboard.println("Behnam Saeedi");
     rsmdelay = 0;
    }
    rsmdelay++;
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    rsmdelay++;
   }
   if (!digitalRead(website))
   {
    if(rsmdelay > 4*DL)
    {
     Keyboard.press(MODIFIERKEY_GUI);
     Keyboard.press(KEY_R);
     delay(3*DL);
     Keyboard.release(MODIFIERKEY_GUI);
     Keyboard.release(KEY_R);
     delay(3*DL);
     Keyboard.print("C:\\Program Files\\Internet Explorer\\iexplore.exe https://www.linkedin.com/in/behnam-saeedi-30456983");
     delay(3*DL);
     Keyboard.press(KEY_ENTER);
     Keyboard.release(KEY_ENTER);
     rsmdelay = 0;
    }
    rsmdelay++;
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    rsmdelay++;
   }
   //end of special keys
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
   if (!digitalRead(Y))
   {
     Keyboard.press(KEY_Y);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_Y);
   }
   if (!digitalRead(A))
   {
     Keyboard.press(KEY_A);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_A);
   }
   if (!digitalRead(B))
   {
     Keyboard.press(KEY_B);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_B);
   }
   if (!digitalRead(bckspce))
   {
      Keyboard.press(KEY_BACKSPACE);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_BACKSPACE);
   }
   if (!digitalRead(enter))
   {
     Keyboard.press(KEY_ENTER);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_ENTER);
   }
   if (!digitalRead(L))
   {
     Keyboard.press(KEY_L);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_L);
   }
   if (!digitalRead(R))
   {
     Keyboard.press(KEY_R);
      digitalWrite(PIN_D6,HIGH);
   }   else
   {
    Keyboard.release(KEY_R);
   }
   if( 
   digitalRead(X) &&
   digitalRead(Y) &&
   digitalRead(A) &&
   digitalRead(B) &&
   digitalRead(R) &&
   digitalRead(L) &&
   digitalRead(enter) &&
   digitalRead(bckspce) &&
   digitalRead(rsm) &&
   digitalRead(website) &&
   digitalRead(up) &&
   digitalRead(down) &&
   digitalRead(left) &&
   digitalRead(right)
     )
   {
    digitalWrite(PIN_D6,LOW);
      break;
   }
  }
  Keyboard.release(KEY_X);
  Keyboard.release(KEY_Y);
  Keyboard.release(KEY_A);
  Keyboard.release(KEY_B);
  Keyboard.release(KEY_R);
  Keyboard.release(KEY_L);
  Keyboard.release(KEY_BACKSPACE);
  Keyboard.release(KEY_ENTER);
  Keyboard.release(KEY_C);
  Keyboard.release(KEY_V);
  Keyboard.release(KEY_UP);
  Keyboard.release(KEY_DOWN);
  Keyboard.release(KEY_LEFT);
  Keyboard.release(KEY_RIGHT);
}

