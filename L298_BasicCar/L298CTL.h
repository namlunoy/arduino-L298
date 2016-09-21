/*
 * L298CTL.h
 *
 *  Created on: Sep 13, 2016
 *      Author: hoangcong
 */

#ifndef L298CTL_H_
#define L298CTL_H_

#include "Wheel.h"

enum Direction {
	stop = '0',
	forward = '1',
	backward = '2',
	forward_left = '3',
	forward_right = '4',
	backward_left = '5',
	backward_right = '6'
};

class L298_CTL {
private:
	Wheel *L;
	Wheel *R;
public:
	L298_CTL();
	virtual ~L298_CTL();

	void setup(int in1, int in2, int in3, int in4);

	void forward();
	void backward();

	void forwardLeft();
	void forwardRight();

	void backwardLeft();
	void backwardRight();

	void stop();
};

#endif /* L298CTL_H_ */
