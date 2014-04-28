/*
 * tnodelib.h
 *
 *  Created on: Oct 23, 2013
 *      Author: brian
 */

#ifndef TNODELIB_H_
#define TNODELIB_H_

#include <iostream>
using namespace std;
template<typename T>
class tnode
{
public:

	T value;
	tnode<T> *left;
	tnode<T> *right;
	tnode() {};

	tnode(T item, tnode* l , tnode* r){

		value = item;
		left= l;
		right = r;
	}

};

class tnodeShadow{

public:
	  tnodeShadow *lf, *rt;
      char letter;
};

template<typename T>
tnode<T> *buildTree(){

	tnode<char> *pa, *pb,*pc,*pd, *pe, *pf,*pg;
	tnode<char> *ph, *pi,*pj,*pk, *pl, *pm,*pn;

	pm = new tnode<char>('m',NULL,NULL);
	pn = new tnode<char>('n',NULL,NULL);
	ph = new tnode<char>('h',pm,pn);
	pd = new tnode<char>('d',ph,NULL);
	pi = new tnode<char>('i',NULL,NULL);
	pe = new tnode<char>('e',pi,NULL);
	pb = new tnode<char>('b',pd,pe);
	pj = new tnode<char>('j',NULL,NULL);
	pf = new tnode<char>('f',NULL,pj);
	pl = new tnode<char>('l',NULL,NULL);
	pk = new tnode<char>('k',NULL,NULL);
	pg = new tnode<char>('g',pk,pl);
	pc =new tnode<char>('c',pf,pg);
	pa = new tnode<char>('a', pb,pc);

	return pa;
}
template<typename T>
void inorder(tnode<T> *r){

	if(r != NULL)
	{
		inorder(r->left);
		cout << r->value << ", ";
		inorder(r->right);
	}
}
template<typename T>
void postorder(tnode<T> *r){

	if(r != NULL)
	{
		postorder(r->left);
		postorder(r->right);
		cout << r->value << ", ";
	}
}
template<typename T>
void preorder(tnode<T> *r){

	if(r != NULL)
	{
		cout << r->value << ", ";
		preorder(r->left);
		preorder(r->right);
	}
}

#endif /* TNODELIB_H_ */
