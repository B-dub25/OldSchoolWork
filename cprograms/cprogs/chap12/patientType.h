#ifndef PATIENTTYPE_H_INCLUDED
#define PATIENTTYPE_H_INCLUDED

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

 #include <string>
 #include "dateType.h"
 #include "billType.h"
 #include "doctorType.h"
 #include "newpersontype.h"
 const int MAX = 3;
 class patient: public persontype
 {
 public:
    void setPatient_info(std::string,std::string,
                          int age, bDate dat[],doctor,billing);
    //This will set the patients ID, age and use the class bDate as a
    //array to store the birthday, admittion day and discharge day.
    //This will also store the doctor in the object created by the
    //class doctor type.
    void get_Admitted_day() const;
    //Prints the admittion day
    void get_dicharge_day() const;
    //Prints the discharge day
    void get_doctor() const;
    //Prints off the doctors information.
    int get_paId() const;
    //Returns the patients ID number
    void get_patient_name() const;
    //Returns the patients name
    void get_bill() const;
    //Gets the patients bill
    patient();
    //For the default constructor
 private:
    bDate days[MAX];
    doctor doc;
    std::string fnam,lnam;
    int Age,pa_ID;
    billing fee;
 } ;
#endif // PATIENTTYPE_H_INCLUDED
