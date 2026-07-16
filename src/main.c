/* src/main.c
 * this is the source code for group 12 Arduino Project "traffic light"
 * Written by Jibril F. Manlapaz
 * Copyright (C) Mit License 2026 Group 12
 * Code Base: https://github.com/JM-Pilot/Robotics2-Traffic-Lights
 */
#include <Arduino.h>
#include "include/pins.h"

/* change this if you want to change delays */
#define GREEN_DELAY 7000 // 7 sec
#define YELLOW_DELAY 3000 // 2 sec
#define RED_DELAY 7000 // 7 sec

void countdown(int d);

/* initialize leds, and other sensors */
void setup()
{
	pinMode(LED_GREEN, OUTPUT);
	pinMode(LED_RED, OUTPUT);
	pinMode(LED_YELLOW, OUTPUT);
}


/* loop */
void loop()
{
	/* Show greeeeeeen, disable red */
	digitalWrite(LED_RED, LOW);
	digitalWrite(LED_GREEN, HIGH);
	countdown(GREEN_DELAY);

	/* Show yellow, disable green */
	digitalWrite(LED_GREEN, LOW);
	digitalWrite(LED_YELLOW, HIGH);
	countdown(YELLOW_DELAY);

	/* Show Red, disable yellow */
	digitalWrite(LED_YELLOW, LOW);
	digitalWrite(LED_RED, HIGH);
	countdown(RED_DELAY);
}

/* countdown, make use of other components while doing this (eg. timer or display)*/
void countdown(int d)
{	
	/* divide by 1000 (example 5000 / 1000 = 1s)*/
	for (int i = 0; i < (d / 1000); i++) {
		delay(1000);
	}
}