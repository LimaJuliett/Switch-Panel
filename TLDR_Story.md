Okay, you clicked. Here's the short version:

# What are we making?
This!

![Ta-da!](/images/Finished_1.jpg)

It's a box with some switches on the front. Switches are wired into microcontroller acting as a USB-HID device and sending switch inputs to the computer as button presses on a joystick. Styled to taste, of course.

# Building the thing:

## Make a plan
Main questions:
* What do you want to accomplish? Try to be as specific as possible.
* What systems do you need to control to accomplish that goal?
* How are you going to control those systems?
* How are you going to mount and interpret those controls?

You may also want to think about the order of the controls, and where they'll be in relation to your hand.

## Make a prototype
* Realize mistakes now, not later. It can seriously be a cardboard box with the microcontroller hanging out the back (that's what I did).
* Revise plan as nessicary. You may want to modify the prototype (again, find and correct mistakes now, not later).

## Make a box
It should be:
* The right width to hold all the controls with a suitable distance between them (1.4 cm for small switches is what I used and I like it)
* Big enough to fit all the electronics and wiring
* Sit flat on a level surface (no annoying rocking back and forth)
* Easy to open (or even dissasemble) for debugging/maintenance

## Assemble electronics
* Teensy or other ATmega32u4-based microcontroller (so it can act as a USB joystick)
  * You could also use serial communication, a Processing script, and a virtual joystick, but that's a lot more work
* Remember to use INPUT_PULLUP and not just INPUT when setting PINMODE
* Use some form of debouncing (I used the Bounce2 library) or input smoothing for analog inputs
* You can light it up with LEDs! You could even control them by using the right pins, but I had long since run out of energy at that point
  * Consider painting the inside of the box white so the light from the LEDs is nice and even. Glossy paint is good.

## Debug
* If on Windows, my utility of choice was joy.cpl
