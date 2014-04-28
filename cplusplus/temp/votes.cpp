/*
 * votes.cpp
 *
 *  Created on: Feb 26, 2013
 *      Author: brian
 */
#include "votes.h"

votes::votes(){
	the_votes = new int*[MAX];
	total = new int[MAX];
	for(int i = 0; i < MAX; ++i)
		the_votes[i] = new int[4];
}

votes::votes(const votes& obj) : base(obj){

	     if(*this != obj){
		 delete [] the_votes;
		 for (int r = 0;  r < counter; ++ r) {
		  for (int c = 0; c < counter; ++c)
				the_votes[r][c] = obj.the_votes[r][c];
		 }
	}
}
void votes::select(){
	    int temp;
	    int largest = 0; int row = 0;
	    for(int i = 0; i < 7 ; ++i)
	    {
	    	row = i;
	    	for(int x = 0; x < 3  ; x++){
	    		largest = x;
	    	 for(int j = 1+x; j < 3 ; ++j) {
				if(the_votes[row][largest] < the_votes[i][j])
				 {largest = j; row = i;}
			}
            temp = the_votes[row][largest];
			the_votes[i][largest] = the_votes[i][x];
	        the_votes[row][x] = temp;
	      }
	    }
}
void votes::Swap(votes& obj, int r, int r3){

	int* temp = new int[4];
	string name = obj[r];
	int* t = new int;
	for(int i = 0; i < 4; ++i)
		temp[i] = this->the_votes[r][i];
	for(int i = 0; i < 4; ++i)
		this->the_votes[r][i] = this->the_votes[r3][i];
	     obj[r] = obj[r3];
	for(int i = 0; i < 4; ++i)
		this->the_votes[r3][i] = temp[i];
	    obj[r3] = name;
	*t = total[r];
	this->total[r] = this->total[r3];
	this->total[r3] = *t;

	delete t; delete [] temp;
}
void votes::sort(votes& obj){
       select();

	int largest = 0, j = 0, row = 0;
    for(int i = 0 ; i < 7-1; ++i)
    {
    	largest = i;
    	for(int x = i+1; x < 7; x++){
    	  for(j = 0; j < 3 ; ++j) {
			 if(the_votes[largest][row] < the_votes[x][j])
		       { largest = x; row = j; }
    	  }

       }
       votes::Swap(obj,i,largest);
    }

}
string votes::what() const {
	return "Error";
}

istream& operator>>(istream& is, votes& obj){

	for (int r = 0 ; r < obj.MAX && is; r++){
		   is >> obj[r];
		   for(int i = 0; i < 3; ++i){
		      is >> obj.the_votes[r][i];
		      obj.total[r] += obj.the_votes[r][i];
		   }
	 obj.counter++;
	 }
	 obj.sort(obj);
	 return is;
}
ostream& operator<<(ostream& os , const votes& obj){

	 for (int i = 0; i < obj.counter - 1; ++i)
	    {
	    	os << left << setw(14) << obj[i] << " ";
	    	for(int c = 0; c < 3; ++c){
	    	os << right <<setw(4) << obj.the_votes[i][c];
	    	}
	    	os << right << setw(4) << obj.total[i] << endl;
	    }
	    return os;
}
