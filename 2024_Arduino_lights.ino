#include <Adafruit_NeoPixel.h>
#define firstDigitPin 1
#define secondDigitPin 2
#define thirdDigitPin 3
#define outputPin 4
#define pixelCount 90



void setup() {
	 pinMode(firstDigitPin, INPUT);
	 pinMode(secondDigitPin, INPUT);
	 pinMode(thirdDigitPin, INPUT);
 	 pinMode(outputPin, OUTPUT);
	 bool digitReadArray[3]={digitalRead(firstDigitPin),digitalRead(secondDigitPin),digitalRead(thirdDigitPin)};  //the array where we store info from the rio
	 char digitCacheArray=0000;
	 char digitConvertArray=1; //set to 1 so that the 0 in the binary code is held.
}

void loop() {
	for(char i = 0;i<3;i++){
		 digitConvertArray = digitConvertArray*10 + digitReadArray[i]
	}
	digitCacheArray=digitConveryArray;
}
