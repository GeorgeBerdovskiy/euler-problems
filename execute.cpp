#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char** argv) {
	string filename = argv[1];
	string argument = "g++ " + filename + ".cpp -o executables/" + filename;

	system(argument.c_str());
	system( ("./executables/" + filename).c_str() );

    return 0;
}

