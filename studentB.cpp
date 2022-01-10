#include <iostream>
#include "string.h"

/*************** constructeur de ourString ***************/
string::string (){ // ajout constructeur par défaut 
	tab [0] = 'H';
	tab [1] = 'e';
	tab [2] = 'l';
	tab [3] = 'l';
	tab [4] = 'o';
	}

	
//string::string(string s){ //constructeur str donné
//	;
//	}

/*************** accesseur ***************/
char* string::gettab(){ //get tab
	return this->tab;
	}


/*************** main test ***************/
int main(){
	string s;
	std::cout << s.gettab() << std::endl;
	}



