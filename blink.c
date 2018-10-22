#include <stdio.h>
#include <wiringPi.h>
#define LED 25
int main(void){
	wiringPiSetup();
	pinMode(LED, OUTPUT);
	for (;;){
		digitalWrite(LED, 1);
		delay(990);
		digitalWrite(LED, 0);
		delay(10);
	}
	return 0;
}
