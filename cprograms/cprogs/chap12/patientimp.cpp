/*
 * Copyright 2012 Brian Rundel <brundel@wccnet.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

 #include <ctime>
 #include <cctype>
 #include <string>
 #include <cstdlib>
 #include <iostream>
 #include "dateimp.cpp"
 #include "doctorimp.cpp"
 #include "patientType.h"
 #include "billingimp.cpp"

 using namespace std;

 void patient::setPatient_info(string fnames,string lnam,int age,
                               bDate day[],doctor physician, billing owe)
 {
       srand(time(0));
       setName(fnames,lnam);
       pa_ID = (rand() % 1000) * 77; //set a random patient ID number
       Age = age;

       for(int x = 0; x < MAX;x++)
           days[x] = day[x];
       doc = physician;
       fee = owe;

 }
 void patient::get_Admitted_day() const
 {
     days[1].print();
 }
 void patient::get_dicharge_day() const
 {
     days[2].print();
 }

 int patient::get_paId() const
 {
     return pa_ID;
 }

 void patient::get_doctor() const
 {
     doc.print();
 }

 void patient::get_patient_name() const
 {
     persontype::print();
 }

 void patient::get_bill() const
 {
     cout << "Room Fee: " << fee.get_room_fee() << "\n"
          << "Doctor Fee: " << fee.get_doc_fee() << "\n"
          << "Pharmacy Fee: " << fee.get_phar() << endl;
 }

 patient::patient()
 {
     pa_ID = 0;
     Age = 0;
 }
 int total = 30;

 int main()
 {
     patient patients[total];
     bDate   admit[3];
     doctor physician;
     billing due;
     string first,last,specailty;
     int age,day,month,year;
     double room,doc,pharm;
     char answer;
     cout << "Enter doctors name: ";            cin >> first >> last;
     cout <<  "Enter doctor specialty ";        cin >> specailty;
     physician.setSpecialty(first,last,specailty);
     cout << "Enter patients name: ";           cin >> first >> last;
     cout << "Enter the birthday of patient: "; cin >> day >> month >> year;
     admit[0].setDate(day,month,year);
     cout << "Enter the admittion date: ";      cin >> day >> month >> year;
     admit[1].setDate(day,month,year);
     cout << "Is there a discharge date? ";     cin >> answer;
     if(toupper(answer) == 'Y')
     {
         cout << "Enter discharge day ";
         cin >> day >> month >> year;
         admit[2].setDate(day,month,year);
     }
     else
         admit[2].setDate(0,0,0);
         patients[0].setPatient_info(first,last,23,admit,physician,due);
         patients[0].get_doctor();
         patients[0].get_patient_name();
 }
