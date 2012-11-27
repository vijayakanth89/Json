#include "JsonParser.h"

JSON::Parser::~Parser() {}

JSON::Parser::Parser() {}

JSON::Parser::Parser(string data) {
	d = NULL;
	len = data.length();
	d = (char * ) malloc(len * sizeof(char));
	strcpy(d, data.c_str());
	parse();
}

void JSON::Parser::parse() {
	// would detect the json data and update to stl vector or ma
	cout << "reaching here.... " << endl;

	char *end = d + sizeof(char) * (len-2);	

	cout << end << endl;
	while( *d!='\0'){

		char temp = * (d);
		
		switch(temp) {
			case JSON::SQUARE_START:
				break;
			case JSON::SQUARE_END:
				break;
			case JSON::CURLY_START:
				break;
			case JSON::CURLY_END:
				break;
			case JSON::STRING_DELIMITER:
				break;
			case JSON::STRING_DELIMITER_2:
				break;
			case JSON::ARRAY_DELIMITER:
				break;
			case JSON::KEY_DELIMITER:
				break;
			default:
				break;
		}

		d++;
	}
}
