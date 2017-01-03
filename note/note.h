#ifndef _note_h
#define _note_h

#include <Arduino.h>

class onpu {
public:
	int tmp;
	int kind;
	int kind2;
	bool dot;
	bool dot2;
	int pin;
	int t;
	int t1;
	int t2;
	int t_on;
	int t_off;
public:
	onpu();
	void note(int, int, bool);
	void renpu(int, int, bool, int, bool);
	void rest(int, int);
	void LED_ON(int);
	void LED_OFF(int);
};


#endif
