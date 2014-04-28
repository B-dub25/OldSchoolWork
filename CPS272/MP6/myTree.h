/*
 * myTree.h
 *
 *  Created on: Nov 19, 2013
 *      Author: brundel
 */

#ifndef MYTREE_H_
#define MYTREE_H_

#include <iostream>
#include <string>
using namespace std;

class node{

	friend class myTree;

private:
      string data;
      node* left;
      node* right;
	  node(string info = NULL, node* l = NULL, node* r = NULL) :  data(info) ,left(l), right(r) {};

};


class myTree {

public:
	  myTree() : root(NULL){}
	  node* insert(string info, node* sub);
	  void inorder(node* r);
	  void postorder(node *r);
	  void inorderDisplay();
	  void postOrederDisplay();
	  void add(string info);
private:
	  node *root;

};

void myTree::inorderDisplay(){
	inorder(root);
}
void myTree::postOrederDisplay(){
	postorder(root);
}
void myTree::add(string info){

	  	root = insert(info, root);
}
node* myTree::insert(string info, node* sub){

	if(sub == NULL){
		sub = new node(info);
		return sub;
	}
	else if(info < sub->data)
	{
		sub->left = insert(info, sub->left);
		return sub;
	}
	else{
		sub->right = insert(info, sub->right);
		return sub;
	}
}

void myTree::postorder(node *r){

	if(r != NULL)
	{
		postorder(r->left);
		postorder(r->right);
		cout << r->data << ", ";
	}
}
void myTree::inorder(node *r){

	if(r != NULL)
	{
		inorder(r->left);
		cout << r->data << ", ";
		inorder(r->right);
	}
}
#endif /* MYTREE_H_ */
