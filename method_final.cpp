#include <iostream>
#include "string.h"

/*************** constructeur de string ***************/
string::string (){ // ajout constructeur par défaut
	tab [0] = 'H';
	tab [1] = 'e';
	tab [2] = 'l';
	tab [3] = 'l';
	tab [4] = 'o';
	}



/*************** accesseur ***************/
char* string::gettab(){ //get tab
	return this->tab;
	}



/*************** fonction ***************/

int string::length() const{
	int l=0;
	int i = 0;
	while (tab[i]!='\0'){
		i++;
		l++;
		}

	return (l);
	}

/************* copy constructeur ***********/
string::string(const string& str){
  for(int i=0; i<=str.length(); i++){
    tab[i] = str.tab[i];
  }
}
