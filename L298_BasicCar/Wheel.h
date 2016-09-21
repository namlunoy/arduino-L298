/*
 * Wheel.h
 *
 *  Created on: Sep 13, 2016
 *      Author: hoangcong
 */

#ifndef WHEEL_H_
#define WHEEL_H_

#include <Arduino.h>

class Wheel {
private:
	int pin1;
	int pin2;
public:
	Wheel(int pin1, int pin2);
	virtual ~Wheel();

	void forward();
	void backward();
	void stop();
};

#endif /* WHEEL_H_ */
