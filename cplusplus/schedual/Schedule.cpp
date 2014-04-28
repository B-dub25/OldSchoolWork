/*
 * schedual.cpp
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */

#include "Schedule.h"

void Entry::setData(int hour , int minute, const char* td){
	 this->m_hour   = hour;
	 this->m_minute = minute;
	 this->m_todo   = td;
}

void Entry::setData(Entry& e){
	 this->m_hour = e.m_hour;
	 this->m_minute = e.m_minute;
	 this->m_todo = e.m_todo;
}
void Entry::printEntry(){
	cout << m_hour << ":" << m_minute << " " << m_todo  << endl;
}
void Schedule::printSchedule(){
      for (int i = 0; i < m_actualEntryCount; ++i)
    	   m_entryArr[i].printEntry();
}
bool Schedule::addEntry(int hour, int minute, const char *todo){

	if(m_actualEntryCount < m_maxEntries){
		m_entryArr[m_actualEntryCount].setData(hour,minute,todo);
		m_actualEntryCount++;
		return true;
	}
	return false;
}
