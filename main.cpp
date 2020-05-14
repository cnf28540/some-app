#include "foo.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

	foo *f = new foo(14,'q');

	cout << "Starting!" << endl;

	f->printSelf();

	cout << "Finished!" << endl;

	delete f;

	return 0;
}
