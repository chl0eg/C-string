#include <iostream>
#include "string.h"
#include <cstring>

/*************** constructeur de string ***************/
string::string (){ // ajout constructeur par défaut
	tab=new char[5];
	tab [0] = 'H';
	tab [1] = 'e';
	tab [2] = 'l';
	tab [3] = 'l';
	tab [4] = 'o';
	tab [5] = '\0';
	len=5;
	}



string::string(char* s){ //constructeur str donné
	int l=0;
	int i = 0;
	while (s[i]!='\0'){
		i++;
		l++;
		}
	len=l;

	tab = new char[10];
	memcpy(tab,s,len);
	tab[len]='\0';
	}

/*************** accesseur ***************/
char* string::gettab(){ //get tab
	return this->tab;
	}

int string::getlength(){ //get length
	return this -> len;
	}


/*************** fonction ***************/

int string::length() const{
	return this -> len;
	}


void string::print(){
	std::cout << this->tab <<std::endl;
}


int string::max_size(){
	return 100;
}

string::~string(){
  if(tab){
    delete tab;
  }
  std::cout<< "string is being deleted" << std::endl;
}
