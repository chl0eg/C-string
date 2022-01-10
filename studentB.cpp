#include <iostream>
#include "ourString.h"

/*************** constructeur de ourString ***************/
ourString::ourString (){ // ajout constructeur par défaut 
	tab [0] = 'H';
	tab [1] = 'e';
	tab [2] = 'l';
	tab [3] = 'l';
	tab [4] = 'o';
	}

/*************** accesseur ***************/
char* ourString::gettab(){ //get tab
	return this->tab;
	}


/*************** main test ***************/
int main(){
	ourString s;
	std::cout << s.gettab() << std::endl;
	}



