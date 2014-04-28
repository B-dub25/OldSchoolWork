/*
 * Sentence.cpp
 *
 *  Created on: Mar 3, 2013
 *      Author: brian
 */
#include "Sentence.h"

Sentence::Sentence(){
	article    = new char*[5];
	noun       = new char*[5];
	verb       = new char*[5];
	preposition = new char*[5];
		for (int i = 0; i < 10; ++i) {
			article[i] = new char[10];
			noun[i]    = new char[10];
			verb[i]    = new char[10];
			preposition[i] = new char[10];
		}
article[0] = {"the"};  noun[0] = {"boy"};  verb[0] = {"drove"};
article[1] = {"a"};    noun[1] = {"girl"}; verb[1] = {"jumped"};
article[2] = {"one"};  noun[2] = {"dog"};  verb[2] = {"ran"};
article[3] = {"some"}; noun[3] = {"town"}; verb[3] = {"walked"};
article[4] = {"any"};  noun[4] = {"car"};  verb[4] = {"skipped"};
preposition[0] = {"to"};  preposition[1] = {"from"}; preposition[2] = {"over"};
preposition[3] = {"under"}; preposition[4] = {"on"};
    srand(time(0));
}
char* Sentence::getArt(){

		int position = rand() % 5;
	    return (article[position]);
}
char* Sentence::getPre(){

		int position = rand() % 5;
		return (preposition[position]);
}
char* Sentence::getVerb(){
	    int position = rand() % 5;
		return (verb[rand() % 5]);
}
char* Sentence::getnoun(){
		int position = rand() % 5;
		return (noun[position]);
}
void Sentence::display(){
	cout << mysentence << endl;
}
void Sentence::createSentence(){
	mysentence = (string)getArt() + " " + (string) +getnoun() +" " +
			(string)getVerb() + " " +(string)getPre() + " " + (string)getArt()
			+ " " + (string)getnoun();
    mysentence[0] = toupper(mysentence[0]);
}

