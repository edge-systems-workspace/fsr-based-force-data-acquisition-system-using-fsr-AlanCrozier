/**
* @file PressureSensorRead.ino
 * @brief Reads analog pressure sensor values and prints them to the Serial Monitor.
 *
 * This program reads the analog value from pin A0 and sends
 * the measured value to the Serial Monitor every second.
 *
 * @author Alan Crozier
 * @date 2026-02-20
 */

#include <Arduino.h>


/**
 * @brief Stores the analog pressure sensor reading.
 */
int pressure = 0;

/**
 * @brief Arduino setup function.
 *
 * Initializes serial communication and configures pin A0.
 * This function runs once when the board starts.
 */
void setup() {

    Serial.begin(9600);

    /**
     * NOTE:
     * A0 is used for analog input, so INPUT mode is recommended.
     */
    pinMode(A0, INPUT);
}

/**
 * @brief Arduino main loop function.
 *
 * Reads the analog value from pin A0 and prints it
 * to the Serial Monitor once every second.
 */
void loop() {

    pressure = analogRead(A0);

    Serial.println(pressure);

    delay(1000);
}