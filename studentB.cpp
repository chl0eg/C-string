#include <iostream>
#include "string.h"

/*************** constructeur de string ***************/
string::string (){ // ajout constructeur par défaut 
	tab [0] = 'H';
	tab [1] = 'e';
	tab [2] = 'l';
	tab [3] = 'l';
	tab [4] = 'o';
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
	
	for (int i; i<l; i++){
		tab[i]=s[i];
		}
	}

/*************** accesseur ***************/
char* string::gettab(){ //get tab
	return this->tab;
	}

//char* string::getlength(){ //get length
//	return this -> len;
//	}


/*************** fonction ***************/

//int string::length (){
//	return this -> len;
//g++	}

char*

/*************** main test ***************/
int main(){
	string s;
	std::cout << s.gettab() << std::endl;
	//std::cout << s.length() << std::endl;
	char my_tab[]="Bonjour";
	string s2(my_tab);
	std::cout << s2.print() << std::endl;
	}



