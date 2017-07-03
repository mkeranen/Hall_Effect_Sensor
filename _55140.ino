/* Basic program for use with 55140 Hall Effect Sensor, 3 wire digital switch
 *  by: Mark Keranen
 * 
 * This program switches the status of Pin 13 LED depending on status of Hall Effect switch.
 * 
 * Components Needed:
 *  - Arduino UNO
 *  - 56 ohm resistor
 * 
 * Pinout description:
 * 55140 Pins:
 *  -Vdd to 5V
 *  -Vo to Pin 2, pulled up to Vdd via 56 ohm resistor (resistance calculated using equation supplied by datasheet)
 *  -GND to GND
 *
 */


//Function: Checks for prescence of magnetic field, outputs status to Serial Monitor & turns on Pin 13 LED when a field is detected
bool prescenceOfMagField;
void magFieldStatus(void){
  prescenceOfMagField = digitalRead(2);
  digitalWrite(13, !prescenceOfMagField);
  if (prescenceOfMagField == 0){
    Serial.println("Field Detected");
    //Put the code that you want to execute when field is detected here
  }
  else{
    Serial.println("No Field Detected");
    //Put the code that you want to execute when no field is detected here
  }
}

//Setup Pinmodes, serial monitor
void setup() {
 
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
  Serial.println("Initialization complete, checking for magnetic field...\n");
  
}

//Check continuously for prescence of magnetic field
void loop() {

  magFieldStatus();
  delay(500);   //Adjust this for faster or slower refresh rates
  
  }
