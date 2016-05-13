# CtrlDuino
This project started by me trying to turn a PS1 controller to a PC controller
feel free to download it!
I do not take any responsibilty over any use of this software or code
use it at your own risk


Important information:
-This does not need any drivers, it behaves like a keyboard!

-I used it to create a gamepad hence it only has 14 keys defined

-Different switches might require different logic (Active high or low, either way they are digital input)

**You might need to change  if (!digitalRead(PIN_F0)) to  if (digitalRead(PIN_F0)) (without "!") to match your switch in case it was active high.

-Here you can find the analog joystick : https://www.sparkfun.com/products/9426

-make sure you go to Tools > Boad > Teensy 2.0

-make sure you go to Tools > USB Type > Keyboard + Mouse *

**otherwise code won't compile!

#GameMode:
press "Select" and "Start" together to toggle lock on gamemode feature
then press "L2" and "R2" at the same time to toggle between O/Q and Left-Click/Right-Click input
it is recommended to use "Select" and "Start" again to toggle it back to locked.
the Teensy's LED indicates if it locked (LED off) or it is unlocked (LED on)

#sample Output:

**Directions Pad> 
wsad

**Triangle, X, Aquare, Circle> 
ikjl

**Select, Start> 
Backspace key, Enter key

**L1,L2> 
right-click e

**R1,R2> 
left-click u

** Analog Joystick on the left> 
Arrow keys

** Analog Joystick on the right> 
moves the mouse

Change the KEY_A (which is key A on keyboard) with any other letter for letters.

#more here:

http://www.pjrc.com/teensy/td_keyboard.html

Watch it in action here:

https://youtu.be/AOS0tR77WrE
