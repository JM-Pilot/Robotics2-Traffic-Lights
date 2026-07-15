/* src/main.c
 * this is the source code for group 12 Arduino Project "traffic light"
 * Written by Jibril F. Manlapaz
 * Copyright (C) Mit License 2026 Group 12
 * Code Base: https://github.com/JM-Pilot/Robotics2-Traffic-Lights
 */
#include <Arduino.h>

#define PIN0 1
#define PIN1 2
#define PIN2 3

/* change this where the wire is */
#define LED_GREEN PIN0
#define LED_RED PIN1
#define LED_YELLOW PIN2

/* change this if you want to change delays */
#define GREEN_DELAY 7000 // 7 sec
#define YELLOW_DELAY 3000 // 2 sec
#define RED_DELAY 7000 // 7 sec

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
	delay(GREEN_DELAY);

	/* Show yellow, disable green */
	digitalWrite(LED_GREEN, LOW);
	digitalWrite(LED_YELLOW, HIGH);
	delay(YELLOW_DELAY);

	/* Show Red, disable yellow */
	digitalWrite(LED_YELLOW, LOW);
	digitalWrite(LED_RED, HIGH);
	delay(RED_DELAY);
}