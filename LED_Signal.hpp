/*
@Author 	Thomas Greb
@Date 		10.06.2022
@Description This library is used for the onboard LED for ESP8266
			 it gives the user visual feedback for several communication events
*/
#ifndef LED_SIGNAL_HPP
#define LED_SIGNAL_HPP

#include <Arduino.h>

//Defines the pin LED of ESP8266 on pin 16
#define ONBOARD_LED 16

class LED_Signal{

	private:
		void LEDOn(void);
		void LEDOff(void);
		void defineLED(void);	
		void trans(void);	
		void conn(void);	

	public: 
		void init(void);
		void send(void);
		void receive(void);
		void connEst(void);
		void disconn(void);
		void connCheck(void);
};
extern LED_Signal signalIndicator;

#endif
