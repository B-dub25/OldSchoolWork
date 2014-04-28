/*
 * Complex.cpp
 *
 *  Created on: Aug 30, 2013
 *      Author: brian
 */
#include "Complex.h"

ostream& operator<<(ostream& os, const Complex& theComplex){

	os << "(" << theComplex.real << " "
			<< "+" << theComplex.imag << "i)";
	return os;

}

istream& operator>>(istream& is, Complex& theComplex){

	char op; // grab the operator
	is >> theComplex.real >> op >> theComplex.imag >> op;
	return is;
}

Complex operator+(const Complex& lhs , const Complex& rhs){

	Complex temp;
	temp.real = lhs.real + rhs.real;
	temp.imag = lhs.imag + rhs.imag;

	return temp;
}

Complex operator-(const Complex& lhs, const Complex& rhs){

	Complex temp ;
	temp.real = lhs.real - rhs.real;
	temp.imag = lhs.imag - rhs.imag;

	return temp;
}

Complex operator*(const Complex& lhs, const Complex& rhs ){

	Complex temp;

	temp.real = (lhs.real * rhs.real ) - (lhs.imag * rhs.imag);
	temp.imag = ( lhs.real * rhs.imag ) + (lhs.imag * rhs.real);

	return temp;
}

Complex operator/(const Complex& lhs, const Complex& rhs){

	Complex temp;
	temp.real = ((lhs.real*rhs.real ) +(lhs.imag * rhs.imag))/ ((pow(rhs.real,2))+ pow(rhs.imag,2));
    temp.imag = (( lhs.imag * rhs.real)- (lhs.real*rhs.imag))/ ((pow(rhs.real,2) ) + (pow(rhs.imag,2)) );
	return temp;
}

void Complex::convertStringToComplex(const string& complexString){

	char op;
	istringstream(complexString) >> this->real >> op >> this->imag;
}
