#include <Adafruit_NeoPixel.h>


#define firstDigitPin 1
#define secondDigitPin 2
#define thirdDigitPin 3
#define pixelCount 90

String digitCacheArray;
String digitConvertArray;
bool digitReadArray[3] = { digitalRead(firstDigitPin), digitalRead(secondDigitPin), digitalRead(thirdDigitPin) };  //the array where we store info from the rio




void setup() {
  pinMode(firstDigitPin, INPUT);
  pinMode(secondDigitPin, INPUT);
  pinMode(thirdDigitPin, INPUT);
  digitCacheArray = "0";  //the cache we will use to see if there was a new input from the robot.  It is set to 0 so when the robot starts, it immediatly checks for an update
  digitConvertArray = "0";
  Serial.begin(9600);

}

/*
Call this code in your main for loop: 
if(digitConvertArray!=digitCacheArray){
    goto EXITPOINT;
  }
*/

void loop() {

  digitConvertArray = "0";  //reset the array to 0 so that the 0 in the binary code is held and so that the array is cleared.
    for (int i = 0; i < 4; i++) {
    if (digitConvertArray[i] == 0) {
      digitConvertArray = digitConvertArray + "0";
    }
    if (digitConvertArray[i] == 1) {
      digitConvertArray = digitConvertArray + "1";
    } else {
      Serial.println("Exited the boolean array range but still in the conversion loop or just smol number");
    }
  }

  if(digitConvertArray=="000"){
    //insert default pattern here
  }
EXITPOINT:
      digitCacheArray = digitConvertArray;
  }