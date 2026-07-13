/* src/main.c
 * this is the source code for group 12 Arduino Project "traffic light"
 * Written by Jibril F. Manlapaz
 * Copyright (C) Mit License 2026 Group 12
 * Code Base: https://github.com/JM-Pilot/Robotics2-Traffic-Lights
 */
#include <Arduino.h>

/* 0 and 1 is tx and rx they are used to talk to the computer, 
 * instead we will use 2, 3 and 4 to be safe
 */
#define PIN0 2
#define PIN1 3
#define PIN2 4

/* change this where the wire is */
#define LED_GREEN PIN0
#define LED_RED PIN1
#define LED_YELLOW PIN2

/* change this if you want to change delays */
#define GREEN_DELAY 5000 // 5 sec
#define YELLOW_DELAY 2000 // 2 sec
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