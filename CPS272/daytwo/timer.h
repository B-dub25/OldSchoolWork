/*
 * timer.h
 *
 *  Created on: Sep 4, 2013
 *      Author: brian
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <time.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <vector>
#include <list>
#include <cstdlib>
using namespace std;

class timer {
public:
      void start();
      void stop();
      timer();
      double getTime();
private:
	clock_t startTime, endTime;
};

timer::timer() : startTime(0) , endTime(0) {}
void timer::start(){

	startTime = clock();
}
void timer::stop(){
	endTime = clock();
}
double timer::getTime(){
	return (endTime - startTime) / (double)(CLOCKS_PER_SEC);
}
#endif /* TIMER_H_ */
