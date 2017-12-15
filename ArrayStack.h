#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Stack.h"
#include <string>

using namespace std;

class ArrayStack : public Stack{
private:
	string* array;
	int size;
	int availPos;
public:
	ArrayStack();
	virtual bool push(string);
	virtual string pop();
	virtual bool isEmpty();
	~ArrayStack();
};

#include "ArrayStack.cpp"

#endif
