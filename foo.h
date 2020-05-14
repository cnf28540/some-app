#ifndef FOO_H
#define FOO_H

#include <stdlib.h>
#include <iostream>
using namespace std;

class foo{
	private:
		int myIntA;
		char myCharB;
		char *bufferBecauseWhyNot;
	public:
		foo(int a, char b);
		~foo();
		int performAmazingComputation();
		void printSelf();

};

#include "foo.cpp"


#endif
