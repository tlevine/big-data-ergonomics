#include <Time.h>  

/*

I have an accelerometer plugged into pins A0, A1 and A2 of an Arduino,
and I'm writing a CSV file (well the line breaks are wrong) to serial.

It depends on the time library (http://www.arduino.cc/playground/Code/Time),
which you install by extracting the download in the arduino `libraries`
directory and restarting arduino. (This actually provides three libraries.)

*/

// Accelerometer pins
const int xPin = A0;
const int yPin = A1;
const int zPin = A2;

// Accelerometer values
int xVal = 0;
int yVal = 0;
int zVal = 0;

// CSV file header
char header[25] = "x,  y,  z,ms since start";

// Time in milliseconds since program start
unsigned long ms;

// Wavelength (1/frequency) in milliseconds
unsigned short int WAVELENGTH = 100;

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
  Serial.println(header);  
}

void loop() {
  // Get the POSIX time
  ms = millis();
  
  // read the value from the sensor:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  zVal = analogRead(zPin);

  // Getting the time here is about 1 millisecond later,
  // so let's not worry the difference.
  // ms = millis();
  
  Serial.print(xVal, DEC);
  Serial.print(',');
  Serial.print(yVal, DEC);
  Serial.print(',');
  Serial.print(zVal, DEC);
  Serial.print(',');
  Serial.print(ms, DEC);
  Serial.print('\n');
  
  delay(WAVELENGTH);
}
