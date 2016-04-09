# CtrlDuino
This project started by me trying to turn a PS1 controller to a PC controller
feel free to download it!
I do not take any responsibilty over any use of this software or code
use it at your own risk


Important information:
-This dow not need any drivers, it literally behaves like a keyboard!

-I used it to create a gamepad hence it only has 14 keys defined

-different switches might require different logic

**You might need to change  if (!digitalRead(PIN_F0)) to  if (digitalRead(PIN_F0)) (without "!") to match your switch

-make sure you go to Tools > Boad > Teensy 2.0

-make sure you go to Tools > USB Type > Keyboard *

**otherwise code won't compile!


sample Output:

**Directions Pad>
wsad

**Triangle, X, Aquare, Circle>
ikjl

**Select, Start>
fh

**L1,L2>
qe

**R1,R2>
uo

Change the KEY_A (which is key A on keyboard) with any other letter for letters.

more here:

http://www.pjrc.com/teensy/td_keyboard.html

Watch it in action here:

https://youtu.be/AOS0tR77WrE
