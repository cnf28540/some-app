foo::foo(int a, char b){
	myIntA = a;
	myCharB = b;
	bufferBecauseWhyNot = (char *)calloc(100,1);
}

foo::~foo(){
	if(bufferBecauseWhyNot != NULL){
		free(bufferBecauseWhyNot);
	}
}

int foo::performAmazingComputation(){
	return 3*myIntA;
}

void foo::printSelf(){
	cout << "#" << myIntA << " C#" << myCharB << endl;
	return;
}
