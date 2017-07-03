# Hall_Effect_Sensor
Arduino code for use with 3 wire digital switch hall effect sensor

/* Base program for use with 55140 Hall Effect Sensor, 3 wire digital switch
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
