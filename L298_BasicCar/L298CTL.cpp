/*
 * L298CTL.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: hoangcong
 */

#include "L298CTL.h"



L298_CTL::L298_CTL() {
	L = NULL;
	R = NULL;
}

void L298_CTL::setup(int in1, int in2, int in3, int in4) {
	if(L != NULL)
		delete L;
	if(R != NULL)
		delete R;

	L = new Wheel(in1, in2);
	R = new Wheel(in3, in4);
}


L298_CTL::~L298_CTL() {
	// TODO Auto-generated destructor stub
	delete L;
	delete R;
}

void L298_CTL::forward() {
	L->forward();
	R->forward();
}

void L298_CTL::backward() {
	L->backward();
	R->backward();
}

void L298_CTL::forwardLeft() {
	L->stop();
	R->forward();
}

void L298_CTL::forwardRight() {
	R->stop();
	L->forward();
}

void L298_CTL::backwardLeft() {
	L->stop();
	R->backward();
}

void L298_CTL::backwardRight() {
	R->stop();
	L->backward();
}

void L298_CTL::stop() {
	L->stop();
	R->stop();
}
