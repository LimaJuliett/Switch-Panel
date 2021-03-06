![The finished product](/images/Finished_1.jpg)

![The finished product again](/images/Finished_2.jpg)

After spending many years in the flight sim community and getting involved in ever more complicated aircraft, I found myself yearning for the ability to keep my hands on physical switches instead of trying to fly with my right hand while using the mouse in my non-dominant left hand to click little switches around the cockpit on short notice. I don’t have the money or time for a full-cockpit setup, and even if I did, I’m not going to build one for every aircraft I fly (there are many). Besides, I hardly ever use many of the switches in the cockpit, and even fewer are ones I have to access on short notice. However, I’ve run out of buttons and switches on my HOTAS. So what to do?

This is when my brain called up a memory from a while ago when I was browsing flight sim hardware just for fun (my antisocial, nerdy version of window shopping at the mall). I’d seen a Saitek switch panel, labeled with general aviation style functions: external lights, magneto controls, landing gear, pitot heat, etc. It was, of course, out of my price range, and I would have to do some serious re-labeling if I was going to use it for fighter aircraft, which is what I really needed a switch panel for in the first place. However, the idea stuck, and last summer, with nothing better to do, I figured I’d build my own.

My prototype is quite frankly a little embarrassing. It involved a lot of bare, twisted wire, some incredibly messy Arduino code, a Teensy 3.2, and exceptionally unreliable electrical connections. There may also have been cardboard. Despite its numerous flaws, it provided the proof of concept, and allowed me to try it out pretty much for free since I already had all the parts laying around. It proved to be extremely valuable in the long run because I discovered and corrected many problems with the prototype and got to refine my goals for the final product. I also reused almost everything (the cardboard was a lost cause) in the next manifestation of it, which is what I’m using now. I highly recommend building a dedicated prototype to give yourself a chance to try it out and sort out surprises before going all out and building a final version.

# Determine a list of functions you want/need.
Ideally, this should include things that you need to access on short notice but don’t have room for on your HOTAS, such as master arm, backup flight control systems, jammer controls, countermeasure controls, etc. I recommend getting comfortable with a HOTAS before building a switch panel, as your needs may change based on your HOTAS. During my prototype trial, I found I also liked having switches assigned to things I would usually use the keyboard for, as it increased the immersion noticeably. I hence added things like engine controls (engine run/stop, canopy controls, gear, flaps, etc.). In other aircraft, like the 737 or GA aircraft, I used them for things like autopilot controls, external lights controls, emergency systems, etc. It was also really handy to have them assigned to anti-ice systems like pitot heat and carb heat since those are things I frequently switch on and off.

I used a spreadsheet to organize all those lists, and to line up 2-position and 3-position switches. You could probably get away with just 2-position switches, but things like the jammer and dispenser controls in the F/A-18 are more immersive and true-to-form with a 3-position switch, and in some cases, it’s quite necessary, such as the Waypoint/Markpoint/Mission selector in the A-10C’s CDU. Most aircraft’s flaps also have at least three positions (the A-10C and the F/A-18 are examples), and those that only have 2 flap positions can use the 3-position switch just as well by only using 2 of the 3 positions. (Shopping hint: It’s worth knowing the technical names of switches (SPST toggle, SPDT toggle, rotary, etc.) Search engines usually don’t know what you mean when you ask for “toggle switches.” A good place to learn about such things is [here](https://learn.sparkfun.com/tutorials/button-and-switch-basics/all#poles-and-throws-open-and-closed).)

The final trick here is deciding on an order for the switches. Keep in mind where the switch panel will be; you might want to put switches you’ll need to access faster closer to where your hand will be. In my case, I fly with my right hand on the stick and my left hand on the throttle, so the switch panel will go on the left side of my desk. Since my keyboard and mouse are between my stick and throttle, the panel will go on the left side of my throttle, so quick access switches should be on the right of the switch panel, close to my hand.

# Design the box
The switches have to be attached to something, and the something will probably be sitting on your desk. In my case, I made a box 29 cm by 12 cm and 6 cm tall out of 1x4 pieces of wood, with a 1/4” thick acrylic front. It’s a little structurally overkill, but using larger materials made it easier to fasten them together and allowed more room for mistakes. When choosing materials, keep in mind heavier is usually better because it means you can push up on switches hard and the weight of the box will keep it from moving around. If you want to use a conductive material, like sheet metal, it theoretically won't break things (I haven't tried it; you may have to electrically isolate the PCB spacers from the rest of the stripboard in a future step). Just **design it so you can assemble and disassemble it at will.** You might have to troubleshoot!

I spaced my switches about 1.4 cm apart, although you could space them out more. I found 1.4 cm to be a comfortable gap where I could feel confident enough that I could hit the correct switch and not the ones on either side. It looks a little crowded, but it doesn’t feel that way, especially after a little practice. I wouldn’t want them any closer together, though.

# Build the box
This was the most fun and the most arduous step for me. I chose to spray paint my box with a glossy black on the outside and glossy white on the inside. I chose black for the outside because it matches the black theme I have going on with my computer stuff, and white for the inside because I knew I wanted to light up the box and having the inside painted white meant it would reflect whatever color I chose to light it up with. Glossy was just because it looked nice (and would help reflect light around the inside of the box). It’s worth picking up some 20 or 22 gauge wire, as it fits comfortably in the holes in most prototyping PCBs. Some people prefer braided wire because you get slightly better electrical connections that way, but I find it an absolute nightmare to work with, especially at such a small scale, so I used solid copper wire and just used a lot of solder. I also used colors to organize my wires, which helped a lot. Black was ground (as usual) and red was 3.3V and the outputs of the switches. (I would have used blue or green or something for the switch outputs, but I didn’t have any and was unwilling to buy some just for this project.)

I like being able to plug and unplug my microcontroller from projects instead of soldering so I can use them again, so I soldered female pin headers to my stripboard, then plugged my Teensy board into that. The stripboard was attached to the back of the box with PCB spacers. The LEDs were hot-glued to a small rectangle of the same 1/4” acrylic I used on the face of the panel and were attached to the sides of the box with PCB spacers. Every electrical connection was soldered except for the pin headers on the Teensy being attached to the stripboard with the female-male pin headers.

### Dealing with PCB spacers
Those things are a nightmare to screw in with just fingers, so I found a good-sized socket to get some purchase, then finger-tightened it. (See the pictures.) Also, there shouldn’t be much stress on these spacers; all they need to support is a little bit of electronics. There’s no need to tighten these much at all. A gentle but firm tension should do. Finally, you have to drill a good-sized pilot hole before trying to screw it in.

![Use a socket to apply gentle, firm tension](/images/Socket.jpg)

Be sure to test your connections often to make sure solder isn’t overlapping onto a neighboring strip. Hint: if your multimeter says your strips are connected, but you can’t see any solder connecting them, MAKE SURE YOUR SWITCHES ARE OPEN, NOT CLOSED! I made this mistake and it cost me a very frustrating half hour.

![My very messy wiring](/images/No_Lid_2.jpg)

# Electronics
Switches don’t work great as inputs unless you use a pullup resistor or a pulldown resistor. The problem arises from the fact that when the switch is open, it’s not connected to any reference point for the microcontroller, so it doesn’t know whether it’s open or closed. (That’s the simplified version I feel comfortable explaining, anyway.) The Teensys (and Arduinos too, as far as I know) have built-in pullup resistors which you can turn on by using

`pinmode(pin, INPUT_PULLUP);`

instead of

`pinmode(pin, INPUT);`

This serves to connect the pin to a reference point when it’s open, and a different reference point when it’s closed (I used ground, but the internet says you could also use VIN). I also used the Bounce library to eliminate any mechanical inconsistencies in the switch itself. For the LEDs, I will leave the circuit design up to you. I will tell you from experience that LEDs do not last very long if they’re overvolted, and replacing them is a major pain, so it’s worth the time to bust out Kirchhoff’s Loop Rule and figure out resistance values. For the 2 20mA LEDs I had, I used a 6-and-a-bit-Ohm resistor to drop the voltage from 3.3V (there’s a 3.3V pin on my Teensy) to 3.1-ish volts, which is nicely within the 3.0-3.2V tolerance of my LEDs.

### Some soldering tips
If you do find your solder has accidentally connected two strips, there are a few things you can try. I found a Dremel tool with a very small bit worked well for precisely flaking off little pieces of wayward solder. However, if you accidentally formed a solder blob around two wires on different strips, a Dremel tool would take forever. After some experimentation, I found the best thing to do is to heat the solder with your soldering iron, then run something narrow like a bent paperclip between the wires to push the solder to either side. This worked well for me and made a minimal mess.

### If you’re worried about running out of pins
You won’t unless you use a lot of buttons. The software will run out of button inputs before the Teensy board will run out of pins, even if you use a little Teensy 3.2 like me. I completely exhausted the software by using all 32 button inputs and only used about 3/4 of the pins on my Teensy.

### Can't I just use an Arduino?
The default hobby electronics microcontroller is usually an Arduino of some description. They’re fantastic little things; however, the majority of Arduinos can’t directly behave as a USB-HID device. You’d have to use an intermediary program (like a Processing script) to be the middleman and use a virtual joystick to actually give inputs, which is a pain. Teensy boards, on the other hand, can be a normal USB-HID joystick, which shows up on your computer the same as your HOTAS or other game controllers. This isn’t a software thing; the Teensy boards actually use different chips.

At the time of this writing, there are a few Arduinos that can behave as USB-HID devices: the Leonardo, Mini, and Pro Mini. If you choose to go this route, check out [this GitHub library](https://github.com/MHeironimus/ArduinoJoystickLibrary) for using them as a joystick instead of the default keyboard/mouse.

Teensy boards range from about $15 to about $35. You can get a basic Arduino for as little as $10, but you’ll probably spend many more hours than it’s worth creating and debugging a Processing script, a virtual joystick, and the interfaces between each step if you choose to go that route. However, the Teensy’s built-in Joystick library and the GitHub Arduino Leonardo/Mini/Pro Mini library only have support for 32 button inputs, so if you want a lot of switches, you’ll have to go the virtual joystick route anyway, as the only limitation is your coding skills and patience.

### Code
My Arduino code is in this repository as /SwitchPanelCode.ino. If you want to use it, you’ll have to modify it to correspond with where 2-position and 3-position switches are, since yours will probably be different than mine. I suck at object-oriented programming in C++, so I just hard-coded it. It’s not pretty, but it works. You also have to switch the USB Type to “Flight Sim Controls + Joystick” under Tools. Feel free to make/distribute derivative works; I’m well aware my coding skills are not great, so any improvements are welcomed.

### Debug
I used Windows' built-in joystick tool called "joy.cpl." You can find it through Control Panel, or just search for it in the Start Menu. Call it by its full name or it might not come up.

![joy.cpl](/images/Joy.cpl.jpg)

# Lessons Learned
If I were to do this again, the main thing I would have done differently is I would have taken better care making sure the box would sit flat on the table. (It doesn’t currently and that’s very annoying.) The next thing that would have made it a lot easier is if I’d traced where to drill pilot holes for PCB spacers before soldering/attaching things instead of after. Also, I should have realized that I could solder the wires from the switches to the stripboard anywhere along each pin’s strip and chose to not solder them right next to each other. Finally, I would have done a more careful painting job on the outside, as the box’s paint is more visible than I thought. The internal lights work a treat and having one on either side gives even enough lighting.
