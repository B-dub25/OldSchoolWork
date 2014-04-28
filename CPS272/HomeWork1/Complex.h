/*
 * Complex.h
 *  CPS 272 HomeWork 1
 *  Created on: Aug 30, 2013
 *      Author: Brian Rundel
 *
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class Complex {

	friend ostream& operator<<(ostream& os, const Complex& theComplex);
	friend istream& operator>>(istream& is, Complex& theComplex);
	friend Complex operator+(const Complex& lhs, const Complex& rhs);
	friend Complex operator-(const Complex& lhs, const Complex& rhs);
	friend Complex operator*(const Complex& lhs, const Complex& rhs);
	friend Complex operator/(const Complex& lhs, const Complex& rhs);

public:

	Complex(double re = 0.0, double im = 0.0){
		this->real = re; this->imag = im;
	}
	double getReal() const { return real;}
	double getImaginary() const { return imag; }
	void setReal(double re) { this->real = re; }
	void setImaginary(double im) { this->imag = im; }
	void convertStringToComplex(const string& complexString);

private:
	double real;
	double imag;

};


#endif /* COMPLEX_H_ */
