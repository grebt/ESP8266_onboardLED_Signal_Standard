#include "LED_Signal.hpp"
#include <Arduino.h>


//Initialization tasks

void LED_Signal::defineLED(void){
	pinMode(ONBOARD_LED, OUTPUT);
}

void LED_Signal::init(void){
	defineLED();
}

// LED state voids
void LED_Signal::LEDOn(void){
	digitalWrite(ONBOARD_LED, LOW);
}

void LED_Signal::LEDOff(void){
	digitalWrite(ONBOARD_LED, HIGH);
}


// Data Transmission initiator
void LED_Signal::trans(){
	for(int i=0; i<3; i++){
		LEDOn();
		delay(75);
		LEDOff();
		delay(50);
	}
}

void LED_Signal::send(void){
	LEDOn();
	delay(100);
	LEDOff();
}

void LED_Signal::receive(void){
	LEDOn();
	delay(150);
	LEDOff();
	delay(50);
	LEDOn();
	delay(100);
	LEDOff();
}

// Connection initiator
void LED_Signal::conn(void){
	for(int i=0; i<2; i++){
		LEDOn();
		delay(200);
		LEDOff();
		delay(50);
	}	
}

void LED_Signal::connEst(void){
	conn();
	for(int i=0; i<5; i++){
		LEDOn();
		delay(50);
		LEDOff();
		delay(50);
	}
}
void LED_Signal::disconn(void){
	conn();
	for(int i=0; i<2; i++){
		LEDOn();
		delay(300);
		LEDOff();
		delay(50);
	}
}
void LED_Signal::connCheck(){
	conn();
	for(int i=0; i<2; i++){
		LEDOn();
		delay(100);
		LEDOff();
	}
}
LED_Signal signalIndicator;
