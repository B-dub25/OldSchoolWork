/*
 * driver.cpp
 *
 *  Created on: Nov 13, 2013
 *      Author: brundel
 */


#include <iostream>
#include <map>
#include <string>
#include <hashtable.h>
#include <algorithm>

using namespace std;

typedef multimap<string, double,less< string > > mMap;
int main(int argc, char **argv) {

	map<string, int> coursemap;
	map<string,int>::iterator iter;
	mMap::iterator it;

	multimap<string, double,less< string > > average;
	average.insert(mMap::value_type("CPS 272", 95.7));
	average.insert(mMap::value_type("CPS 272", 100.7));
	average.insert(mMap::value_type("CPS 272", 85.2));
	average.insert(mMap::value_type("CPS 171", 75.3));
	average.insert(mMap::value_type("CPS 271", 85.7));
    //copy(average.begin(), average.end(), output);

	for (it = average.begin(); it != average.end(); ++it) {
			  cout << (*it).first << "\t" << (*it).second << endl;
		}

	coursemap.insert(pair<string, int>("cps272", 8));
	coursemap.insert(pair<string, int>("cps171", 26));
	coursemap.insert(pair<string, int>("cps271", 18));
	coursemap.insert(pair<string, int>("cps120", 28));
    coursemap.insert(pair<string, int>("cps271", 18));;


	for (iter = coursemap.begin(); iter != coursemap.end(); ++iter) {
		  cout << (*iter).first << "\t" << (*iter).second << endl;
	}

	//it = average.find("CPS 272");// << endl;
	it =  average.lower_bound("CPS 272");
	cout << (*it).second  << " <- "<< endl;
	iter = coursemap.find("cps120");

	if(iter != coursemap.end()){
		cout << "class found " << endl;
	   while(iter != coursemap.end())
	   {
		   cout << (*iter).first << "\t" <<(*iter).second << endl;
		   ++iter;
	   }
	}

	else
		cout << "class not found " << endl;

     coursemap.erase("cps271");
     for (iter = coursemap.begin(); iter != coursemap.end(); ++iter) {
     		  cout << (*iter).first << "\t" << (*iter).second << endl;
     	}

     //coursemap.at("cps341") += 6;

     for (iter = coursemap.begin(); iter != coursemap.end(); ++iter) {
          		  cout << (*iter).first << "\t" << (*iter).second << endl;
          	}

}


