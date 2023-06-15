#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


// interval between the animation frames
int frame_delay = 70;

const unsigned char Frame1 [1024] PROGMEM = {

};
// 'Frame1'
const unsigned char Frame2 [1024] PROGMEM = {

};
// 'Frame2'
const unsigned char Frame3 [1024] PROGMEM = {

};
// 'Frame3'
const unsigned char Frame4 [1024] PROGMEM = {

};
// 'Frame4'
const unsigned char Frame5 [1024] PROGMEM = {

};
// 'Frame5'
const unsigned char Frame6 [1024] PROGMEM = {

};
// 'Frame6'
const unsigned char Frame7 [1024] PROGMEM = {

};
// 'Frame7'
const unsigned char Frame8 [1024] PROGMEM = {

};
// 'Frame8'
const unsigned char Frame9 [1024] PROGMEM = {

};
// 'Frame9'
const unsigned char Frame10 [1024] PROGMEM = {

};
// 'Frame10'
const unsigned char Frame11 [1024] PROGMEM = {

};
// 'Frame11'
const unsigned char Frame12 [1024] PROGMEM = {

};
// 'Frame12'
const unsigned char Frame13 [1024] PROGMEM = {

};
// 'Frame13'
const unsigned char Frame14 [1024] PROGMEM = {

};
// 'Frame14'
const unsigned char Frame15 [1024] PROGMEM = {

};
// 'Frame15'
const unsigned char Frame16 [1024] PROGMEM = {

};
// 'Frame16'
const unsigned char Frame17 [1024] PROGMEM = {

};
// 'Frame17'
const unsigned char Frame18 [1024] PROGMEM = {

};
// 'Frame18'
const unsigned char Frame19 [1024] PROGMEM = {

};
// 'Frame19'
const unsigned char Frame20 [1024] PROGMEM = {

};
// 'Frame20'
const unsigned char Frame21 [1024] PROGMEM = {

};
// 'Frame21' (80)
const unsigned char Frame22 [1024] PROGMEM = {

};
// 'Frame22'
const unsigned char Frame23 [1024] PROGMEM = {

};
// 'Frame23'
const unsigned char Frame24 [1024] PROGMEM = {

};
// 'Frame24'
const unsigned char Frame25 [1024] PROGMEM = {

};
// 'Frame25'
const unsigned char Frame26 [1024] PROGMEM = {

};
// 'Frame26'
const unsigned char Frame27 [1024] PROGMEM = {

};
// 'Frame27'
const unsigned char Frame28 [1024] PROGMEM = {

};
// 'Frame28' //87
const unsigned char Frame29 [1024] PROGMEM = {

};
// 'Frame29'
const unsigned char Frame30 [1024] PROGMEM = {

};
// 'Frame30'
const unsigned char Frame31 [1024] PROGMEM = {

};
// 'Frame31'
const unsigned char Frame32 [1024] PROGMEM = {

};
// 'Frame32'
const unsigned char Frame33 [1024] PROGMEM = {

};
// 'Frame33'
const unsigned char Frame34 [1024] PROGMEM = {

};
// 'Frame34'
const unsigned char Frame35 [1024] PROGMEM = {

};
// 'Frame35' 94
const unsigned char Frame36 [1024] PROGMEM = {

};
// 'Frame36'
const unsigned char Frame37 [1024] PROGMEM = {

};
// 'Frame37'
const unsigned char Frame38 [1024] PROGMEM = {

};
// 'Frame38'
const unsigned char Frame39 [1024] PROGMEM = {

};
// 'Frame39'
const unsigned char Frame40 [1024] PROGMEM = {

};
// 'Frame40'
const unsigned char Frame41 [1024] PROGMEM = {

};
// 'Frame41'
const unsigned char Frame42 [1024] PROGMEM = {

};
// 'Frame42'
const unsigned char Frame43 [1024] PROGMEM = {

};
// 'Frame43'
const unsigned char Frame44 [1024] PROGMEM = {

};
// 'Frame44'
const unsigned char Frame45 [1024] PROGMEM = {

};
// 'Frame45'
const unsigned char Frame46 [1024] PROGMEM = {

};
// 'Frame46'

void setup() {


  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  // display.display();
  // delay(2000); // Pause for 2 seconds
}

void loop() {

  // Diplay Animation

  // Frame1
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame1, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame2
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame2, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame3
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame3, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame4
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame4, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame5
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame5, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame6
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame6, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame7
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame7, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame8
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame8, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame9
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame9, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame10
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame10, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame11
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame11, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame12
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame12, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame13
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame13, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame14
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame14, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame15
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame15, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame16
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame16, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame17
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame17, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame18
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame18, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame19
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame19, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame20
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame20, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame21
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame21, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame22
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame22, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame23
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame23, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame24
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame24, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame25
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame25, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame26
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame26, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame27
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame27, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame28
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame28, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame29
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame29, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame30
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame30, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame31
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame31, 128, 64, 1);
  display.display();
  delay(frame_delay);


  // Frame32
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame32, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame33
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame33, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame34
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame34, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame35
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame35, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame36
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame36, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame37
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame37, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame38
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame38, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame39
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame39, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame40
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame40, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame41
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame41, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame42
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame42, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame43
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame43, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame44
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame44, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame45
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame45, 128, 64, 1);
  display.display();
  delay(frame_delay);

  // Frame46
  display.clearDisplay();
  display.drawBitmap(0, 0, Frame46, 128, 64, 1);
  display.display();
  delay(frame_delay);

  if (frame_delay > 50) frame_delay = frame_delay - 20;

}
