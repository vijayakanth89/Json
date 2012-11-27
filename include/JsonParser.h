#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "Constants.h"

using namespace std;
namespace JSON {

	class Validator 
	{
		public:
			Validator() {
				status = true;
			};

			~Validator();

			void update_metrics(char current_delim, int type, );
			void evaluate();
			
			char prev_delim;
			bool status;
	
	};

	class Hash 	
	{
	
	};

	class Array 
	{
	
	};

	class Object 
	{

	}

	class Parser {
		public:
			Parser(string data);
			Parser();
			~Parser();

			void parse();

		private:
			char *d;
			
			Validator v;
			uint64_t len;
	};
};
