/*
 * demoClass.h
 *
 *  Created on: Oct 16, 2013
 *      Author: brian
 */

#ifndef DEMOCLASS_H_
#define DEMOCLASS_H_
class demoClass {
public:
	demoClass(const int& v = 20);
    int getValue() const ;
    void setValue(const int& v);
    void addValue(const int& v);

private:
    int val;
};

demoClass::demoClass(const int& v ) : val(v){}
void demoClass::setValue(const int& v)
{
	val = v;
}
int demoClass::getValue() const
{
	return val;
}
#endif /* DEMOCLASS_H_ */
