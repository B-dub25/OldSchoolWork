/*
 * up.h
 *
 *  Created on: Nov 30, 2013
 *      Author: brundel
 */

#ifndef UP_H_
#define UP_H_


template <typename T>
class up {
public:
	 up(const T& b = T()): base(b){}
	 T operator() (const T& x)
	 { return x - base ; }

private:
     T base;
};






#endif /* UP_H_ */
