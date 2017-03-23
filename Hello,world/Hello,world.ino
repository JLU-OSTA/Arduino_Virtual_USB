#include <Keyboard.h>

void setup() {
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_CAPS_LOCK); 
delay(500);
Keyboard.release(KEY_CAPS_LOCK); 
delay(500);
Keyboard.press(KEY_LEFT_GUI);
delay(500);
Keyboard.press('r');
delay(500);
Keyboard.release(KEY_LEFT_GUI);
Keyboard.release('r');
delay(500);
Keyboard.println("cmd");
delay(500);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(500);
Keyboard.println("echo hello,world!");
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(500);
Keyboard.press(KEY_CAPS_LOCK);
Keyboard.release(KEY_CAPS_LOCK);
delay(500);
Keyboard.end();
}

void loop() {

}
