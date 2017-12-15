#include "ArrayStack.h"

ArrayStack::ArrayStack(){
	size=5;
	array=new string[5];
	availPos=0;
}
bool ArrayStack::push(string dato){
	bool retval=false;
	if (availPos==size) {
		for (size_t i = 1; i < size; i++) {
			array[i-1]=array[i];
		}
		array[i] = dato;
		retval=true;
		return retval;
	}else{
		array[availPos++]=dato;
		retval=true;
		return retval;
	}
}

bool ArrayStack::isEmpty(){
	return availPos==0;
}

string ArrayStack::pop(){
	if (isEmpty()) {
		return 0;
	}else{
		string retval=array[availPos-1];
		availPos--;
		return retval;
	}
}
ArrayStack::~ArrayStack(){
	delete[] array;
}
