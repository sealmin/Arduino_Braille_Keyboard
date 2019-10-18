#include <Keyboard.h>

const int unobutton = 2;
const int duebutton = 3;
const int trebutton = 4;
const int forbutton = 5;
const int fivbutton = 6;
const int sixbutton = 7;
const int keyenter = 8;
int unokey = 0;
int duekey = 0;
int trekey = 0;
int forkey = 0;
int fivkey = 0;
int sixkey = 0;

void setup() {
   Serial.begin(9600);
  pinMode(unobutton, INPUT);
  pinMode(duebutton, INPUT);
  pinMode(trebutton, INPUT);
  pinMode(forbutton, INPUT);
  pinMode(fivbutton, INPUT);
  pinMode(sixbutton, INPUT);
  pinMode(keyenter, INPUT);
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(unobutton) == HIGH) {
    unokey = 1;
  }  
  if (digitalRead(duebutton) == HIGH) {
    duekey = 1;
  }
  if (digitalRead(trebutton) == HIGH) {
    trekey = 1;
  }
  if (digitalRead(forbutton) == HIGH) {
    forkey = 1;
  }
  if (digitalRead(fivbutton) == HIGH) {
    fivkey = 1;
  }
  if (digitalRead(sixbutton) == HIGH) {
    sixkey = 1;
  }
  if (digitalRead(keyenter) == HIGH) {
    if (unokey == 1 && duekey == 0 && trekey == 0 && forkey == 0 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('a');
     Serial.println('a');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
    }
    if (unokey == 1 && duekey == 1 && trekey == 0 && forkey == 0 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('b');
     Serial.println('b');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
    }
    if (unokey == 1 && duekey == 0 && trekey == 0 && forkey == 1 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('c');
     Serial.println('c');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 0 && forkey == 1 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('d');
     Serial.println('d');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 0 && forkey == 0 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('e');
     Serial.println('e');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 0 && forkey == 1 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('f');
     Serial.println('f');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 0 && forkey == 1 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('g');
     Serial.println('g');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 0 && forkey == 0 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('h');
     Serial.println('h');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 0 && duekey == 1 && trekey == 0 && forkey == 1 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('i');
     Serial.println('i');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 0 && duekey == 1 && trekey == 0 && forkey == 1 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('j');
     Serial.println('j');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 0 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('k');
     Serial.println('k');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 1 && forkey == 0 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('l');
     Serial.println('l');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 1 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('m');
     Serial.println('m');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 1 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('n');
     Serial.println('n');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 0 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('o');
     Serial.println('o');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 1 && forkey == 1 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('p');
     Serial.println('p');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 1 && forkey == 1 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('q');
     Serial.println('q');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 1 && forkey == 0 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('r');
     Serial.println('r');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 0 && duekey == 1 && trekey == 1 && forkey == 1 && fivkey == 0 && sixkey == 0) {
     Keyboard.write('s');
     Serial.println('s');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 0 && duekey == 1 && trekey == 1 && forkey == 1 && fivkey == 1 && sixkey == 0) {
     Keyboard.write('t');
     Serial.println('t');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 0 && fivkey == 0 && sixkey == 1) {
     Keyboard.write('u');
     Serial.println('u');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 1 && trekey == 1 && forkey == 0 && fivkey == 0 && sixkey == 1) {
     Keyboard.write('v');
     Serial.println('v');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 0 && duekey == 1 && trekey == 0 && forkey == 1 && fivkey == 1 && sixkey == 1) {
     Keyboard.write('w');
     Serial.println('w');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 1 && fivkey == 0 && sixkey == 1) {
     Keyboard.write('x');
     Serial.println('x');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 1 && fivkey == 1 && sixkey == 1) {
     Keyboard.write('y');
     Serial.println('y');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    if (unokey == 1 && duekey == 0 && trekey == 1 && forkey == 0 && fivkey == 1 && sixkey == 1) {
     Keyboard.write('z');
     Serial.println('z');
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
     
    }
    else{
     unokey = 0;
     duekey = 0;
     trekey = 0;
     forkey = 0;
     fivkey = 0;
     sixkey = 0;
    }
  }
}
