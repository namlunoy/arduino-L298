/*
 * Wheel.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: hoangcong
 */

#include "Wheel.h"

Wheel::Wheel(int pin1, int pin2) {
	// TODO Auto-generated constructor stub
	this->pin1 = pin1;
	this->pin2 = pin2;
	pinMode(this->pin1, OUTPUT);
	pinMode(this->pin2, OUTPUT);
}

Wheel::~Wheel() {
	// TODO Auto-generated destructor stub
}

void Wheel::forward() {
	digitalWrite(pin1, HIGH);
	digitalWrite(pin2, LOW);
}

void Wheel::backward() {
	digitalWrite(pin1, LOW);
	digitalWrite(pin2, HIGH);
}

void Wheel::stop() {
	digitalWrite(pin1, LOW);
	digitalWrite(pin2, LOW);
}
