#include <iostream>
#include "Json.h"

using namespace std;
using namespace JSON;

int main(int argc, char *argv[]){
	
	cout << "hello......." << endl;

	Json a;
	a.addNameValue("name","vijayakanth");
	a.addNameValue("age","23");
	Json q(TYPE_JSON_ARRAY);

	q.addValue("BTech EC",VALUE_STRING);
	a.addNameValue("Qualifications",q);
	
	string res;
	a.toString(res);

	cout << "res: " << res << endl;

	return 0;
}
