#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(50);
  Keyboard.println("calc");
  delay(50);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(50);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

}