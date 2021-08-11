// I know it would be prettier with object-oriented code, but I'm terrible at that in C++. Fortunately, this works!
// Be sure to set USB Type to something including 'Flight Sim Controls' and/or 'Joystick'

const int bounceTime = 50;
const int pressLength = 100;

#include <Bounce.h>
//Order: 4 2-Pos; 1 3-Pos; 3 2-Pos; 2 3-Pos; 3 2-Pos; 2 Buttons; 1 2-Pos
Bounce switch0=Bounce(0, bounceTime);
Bounce switch1=Bounce(1, bounceTime);
Bounce switch2=Bounce(2, bounceTime);
Bounce switch3=Bounce(3, bounceTime);
Bounce switch4=Bounce(4, bounceTime);
Bounce switch5=Bounce(5, bounceTime);
Bounce switch6=Bounce(6, bounceTime);
Bounce switch7=Bounce(7, bounceTime);
Bounce switch8=Bounce(8, bounceTime);
Bounce switch9=Bounce(9, bounceTime);
Bounce switch10=Bounce(10, bounceTime);
Bounce switch11=Bounce(11, bounceTime);
Bounce switch12=Bounce(12, bounceTime);
Bounce switch14=Bounce(14, bounceTime);
Bounce switch15=Bounce(15, bounceTime);
Bounce switch16=Bounce(16, bounceTime);
Bounce switch17=Bounce(17, bounceTime);

int buttonTap(int joyButton) {
  digitalWrite(13, HIGH);
  Joystick.button(joyButton, 1);
  delay(pressLength);
  Joystick.button(joyButton, 0);
  digitalWrite(13, LOW);
}

int buttonPressed(int joyButton) {
  digitalWrite(13, HIGH);
  Joystick.button(joyButton, 1);
}

int buttonReleased(int joyButton) {
  Joystick.button(joyButton, 0);
  digitalWrite(13, LOW);
}

void setup() {
  pinMode(13, OUTPUT);
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  delay(10);
}

void loop() {
  if (switch0.update()) {
    if (switch0.fallingEdge()) {
      buttonTap(1);
    }
    else if (switch0.risingEdge()) {
      buttonTap(2);
    }
  }  
  
  if (switch1.update()) {
    if (switch1.fallingEdge()) {
      buttonTap(3);
    }
    else if (switch1.risingEdge()) {
      buttonTap(4);
    }
  }
  
  if (switch2.update()) {
    if (switch2.fallingEdge()) {
      buttonTap(5);
    }
    else if (switch2.risingEdge()) {
      buttonTap(6);
    }
  }
  
  if (switch3.update()) {
    if (switch3.fallingEdge()) {
      buttonTap(7);
    }
    else if (switch3.risingEdge()) {
      buttonTap(8);
    }
  }
  
  if (switch4.update()) {
    if (switch4.fallingEdge()) {
      buttonTap(9);
    }
    else if (switch4.risingEdge()) {
      buttonTap(10);
    }
  }
  
  if (switch5.update()); {
    if (switch5.fallingEdge()) {
      buttonTap(11);
    }
    else if (switch5.risingEdge()) {
      buttonTap(10);
    }
  }
  
  if (switch6.update()) {
    if (switch6.fallingEdge()) {
      buttonTap(12);
    }
    else if (switch6.risingEdge()) {
      buttonTap(13);
    }
  }

  if (switch7.update()) {
    if (switch7.fallingEdge()) {
      buttonTap(14);
    }
    else if (switch7.risingEdge()) {
      buttonTap(15);
    }
  }

  if (switch8.update()) {
    if (switch8.fallingEdge()) {
      buttonTap(16);
    }
    else if (switch8.risingEdge()) {
      buttonTap(17);
    }
  }

  if (switch9.update()) {
    if (switch9.fallingEdge()) {
      buttonTap(18);
    }
    else if (switch9.risingEdge()) {
      buttonTap(19);
    }
  }

  if (switch10.update()) {
    if (switch10.fallingEdge()) {
      buttonTap(20);
    }
    else if (switch10.risingEdge()) {
      buttonTap(19);
    }
  }
  
  if (switch11.update()) {
    if (switch11.fallingEdge()) {
      buttonTap(21);
    }
    else if (switch11.risingEdge()) {
      buttonTap(22);
    }
  }
  
  if (switch12.update()) {
    if (switch12.fallingEdge()) {
      buttonTap(23);
    }
    else if (switch12.risingEdge()) {
      buttonTap(22);
    }
  }
  
  if (switch14.update()) {
    if (switch14.fallingEdge()) {
      buttonTap(24);
    }
    else if (switch14.risingEdge()) {
      buttonTap(25);
    }
  }

  if (switch15.update()) {
    if (switch15.fallingEdge()) {
      buttonTap(26);
    }
    else if (switch15.risingEdge()) {
      buttonTap(27);
    }
  }

  if (switch16.update()) {
    if (switch16.fallingEdge()) {
      buttonTap(28);
    }
    else if (switch16.risingEdge()) {
      buttonTap(29);
    }
  }

  if (switch17.update()) {
    if (switch17.fallingEdge()) {
      buttonTap(30);
    }
    else if (switch17.risingEdge()) {
      buttonTap(31);
    }
  }
}
