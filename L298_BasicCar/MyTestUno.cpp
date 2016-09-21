#include <Arduino.h>
#include "L298CTL.h"



L298_CTL car;
Direction dir;

void setup() {
	car.setup(8, 9, 10, 11);
	//Serial.begin(9600);
	// Đợi cho tới khi có kết nối
	//while (!Serial) {
	//}
}

void loop() {
	digitalWrite(8, HIGH);
	digitalWrite(9, LOW);
//	// Xem có nhận được byte nào không?
//	if (Serial.available() > 0) {
//		// Đọc dữ liệu ra
//		char received = Serial.read();
//
//		// Ghi dữ liệu nhận được ra
//		Serial.println(received);
//
//		dir = (Direction) received;
//		switch (dir) {
//			case stop:
//				car.stop();
//				break;
//			case forward:
//				car.forward();
//				break;
//			case backward:
//				car.backward();
//				break;
//			case forward_left:
//				car.forwardLeft();
//				break;
//			case forward_right:
//				car.forwardRight();
//				break;
//			case backward_left:
//				car.backwardLeft();
//				break;
//			case backward_right:
//				car.backwardRight();
//				break;
//			default:
//				break;
//		}
//	}
}

