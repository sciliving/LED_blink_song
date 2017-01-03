#include <note.h>

onpu::onpu(){
}

void onpu::note(int tmp, int kind, bool dot){
	t = 60000 / tmp;
  switch(kind){
    case 1:
		t = 4*t;
		break;
    case 2:
		t = 2*t;
		break;
    case 4:
		t = t;
		break;
    case 8:
		t = t / 2;
		break;
    case 16:
		t = t / 4;
		break;
    case 32:
		t = t / 8;
		break;
    default:
		t = t;
		break;
    }
  if(dot == true){
	  t = t * 3 / 2;
    }
  t_on = (t / 10) * 6;
  t_off = t - t_on;
  LED_ON(11);
  delay(t_on);
  LED_OFF(11);
  delay(t_off);
}

void onpu::renpu(int tmp, int kind, bool dot, int kind2, bool dot2) {
	t = 60000 / tmp;
	switch (kind) {
	case 1:
		t1 = 4 * t;
		break;
	case 2:
		t1 = 2 * t;
		break;
	case 4:
		t1 = t;
		break;
	case 8:
		t1 = t / 2;
		break;
	case 16:
		t1 = t / 4;
		break;
	case 32:
		t1 = t / 8;
		break;
	default:
		t1 = t;
		break;
	}
	if (dot == true) {
		t1 = t1 * 3 / 2;
	}
	switch (kind2) {
	case 1:
		t2 = 4 * t;
		break;
	case 2:
		t2 = 2 * t;
		break;
	case 4:
		t2 = t;
		break;
	case 8:
		t2 = t / 2;
		break;
	case 16:
		t2 = t / 4;
		break;
	case 32:
		t2 = t / 8;
		break;
	default:
		t2 = t;
		break;
	}
	if (dot2 == true) {
		t2 = t2 * 3 / 2;
	}
	t = t1 + t2;
	t_on = (t / 10) * 6;
	t_off = t - t_on;
	LED_ON(11);
	delay(t_on);
	LED_OFF(11);
	delay(t_off);
}

void onpu::rest(int tmp, int kind) {
	t = 60000 / tmp;
    switch(kind){
    case 1:
		t = 4*t;
		break;
    case 2:
		t = 2*t;
		break;
    case 4:
		t = t;
		break;
    case 8:
		t = t / 2;
		break;
    case 16:
		t = t / 4;
		break;
    case 32:
		t = t / 8;
		break;
    default:
		t = t;
		break;
    }
	t_off = t;
	LED_OFF(11);
	delay(t_off);
}

void onpu::LED_ON(int pin){
	digitalWrite(pin, HIGH);
}

void onpu::LED_OFF(int pin){
	digitalWrite(pin, LOW);
}

