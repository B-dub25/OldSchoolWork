/*
 * schedual.h
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */

#ifndef SCHEDUAL_H_
#define SCHEDUAL_H_

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Entry
{
private:
    int m_hour;
    int m_minute;
    string m_todo;

public:
    Entry()
    {
        m_hour = -1;
        m_minute = -1;
        m_todo = "N/A";
    }

    void setData(int hour, int minute, const char *td);

    void setData(Entry & e);

    //This routine prints a line like: 12:30 Take a Walk
    void printEntry();
};


class Schedule
{
private:

    // Array of Entry
    Entry * m_entryArr;

    // Max size of the Array
    int m_maxEntries;

    // Number of entries filled in with setData (starts out = 0)
    int m_actualEntryCount;

public:
// This Constructor will initialize 2 ints and define the m_entryArr
    Schedule(int maxEntries){
    	m_maxEntries = 10;
    	m_actualEntryCount = 0;
    	m_entryArr = new Entry[10];
    }

// Copy Constructor – it is done for you
	Schedule(const Schedule & s) // Copy Constructor
 	{
     	m_actualEntryCount = s.m_actualEntryCount;
     	m_maxEntries = s.m_maxEntries;
     	m_entryArr = new Entry[m_maxEntries];
     	for (int i=0; i < m_actualEntryCount; i++)
     	{
         		m_entryArr[i].setData(s.m_entryArr[i]);
     	}
 }
    //destructor
    ~Schedule() { delete [] m_entryArr; }

// addEntry returns true if it succeeds, false if we are out of space
// Note that addEntry will merely call setData to fill in the next entry
// in the array and increment the m_actualEntryCount

	bool addEntry(int hour, int minute, const char *todo);

// This routine prints out all entries (i.e. as specified by m_actualEntryCount)

	void printSchedule();
};



#endif /* SCHEDUAL_H_ */
