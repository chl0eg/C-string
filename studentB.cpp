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

	
//string::string(char* s){ //constructeur str donné
//	str= char[];
//	for (int i; i<s.length(); i++){
//		str[i]=s[i];
//		}
//	}

/*************** accesseur ***************/
char* string::gettab(){ //get tab
	return this->tab;
	}


/*************** fonction ***************/

int string::length (){
	int l=0;
	int i = 0;
	while (tab[i]!='\0'){
		i++;
		l++;
		} 
		
	return (l);
	}



/*************** main test ***************/
int main(){
	string s;
	std::cout << s.gettab() << std::endl;
	std::cout << s.length() << std::endl;
	//char my_tab[]="Bonjour";
	//string s2(char my_tab[]);
	}



