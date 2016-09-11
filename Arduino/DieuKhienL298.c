#include <stdio.h>
#include "arduino.h"

struct wheel{
    int pin1;
    int pin2;
};

void setupWheel(struct wheel *w, int pin1, int pin2)
{
    w->pin1 = pin1;
    w->pin2 = pin2;
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
}

void moveForward(struct wheel *w){
    digitalWrite(w->pin1, HIGH);
    digitalWrite(w->pin2, LOW);
}

void moveBackward(struct wheel *w)
{
    digitalWrite(w->pin1, LOW);
    digitalWrite(w->pin2, HIGH);
}

void moveStop(struct wheel *w)
{
    digitalWrite(w->pin1, LOW);
    digitalWrite(w->pin2, LOW);
}

void move_forward(struct wheel* L, struct wheel *R)
{
    moveForward(L);
    moveForward(R);
}

void move_backward(struct wheel* L, struct wheel* R)
{
    moveBackward(L);
    moveBackward(R);
}

void move_stop(struct wheel* L, struct wheel *R)
{
    moveStop(L);
    moveStop(R);
}

void move_left(struct wheel* L, struct wheel *R)
{
    moveForward(R);
    moveStop(L);
}

void move_right(struct wheel* L, struct wheel *R)
{
    moveForward(L);
    moveStop(R);
}

struct wheel L,R;

void setup()
{
    setupWheel(&L,6,7);
    setupWheel(&R,8,9);
}

void loop()
{
    move_forward(&L, &R);
    delay(1000);
    move_stop(&L, &R);
    delay(1000);

    move_left(&L, &R);
    delay(1000);
    move_stop(&L, &R);
    delay(1000);

    move_right(&L, &R);
    delay(1000);
    move_stop(&L, &R);
    delay(1000);

    move_backward(&L, &R);
    delay(1000);
    move_stop(&L, &R);
    delay(1000);
}
