/*
 * main.cpp
 *
 *  Created on: Feb 21, 2013
 *      Author: brian
 */

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const double METER = 3.28;

void Get_Data(ifstream& in, double&, double&, bool& );
void Calculate_Material(double&, double&, int, int);
void Calculate_Drywall(double& , double&);
double Convert_To_Feet(double& );

int main(){

	double length , width,
	ifstream infile;

}



