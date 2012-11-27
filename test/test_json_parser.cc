#include "JsonParser.h"
#include <iostream>

using namespace std;

int main( int argc, char *argv[])
{
	string data(argv[1]);
	JSON::Parser p(data );
	return 0;
}
