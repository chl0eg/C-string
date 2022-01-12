#include <iostream>
#include "string.h"

/*************** constructeur de string ***************/
string::string (){ // ajout constructeur par défaut
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

	for (int i=0; i<l; i++){
		tab[i]=s[i];
		}
	}

/*************** accesseur ***************/
char* string::gettab(){ //get tab
	return this->tab;
	}

int string::getlength(){ //get length
	return this -> len;
	}


/*************** fonction ***************/

int string::length (){
	return this -> len;
	}

void string::print(){
	//this->tab[i];
	for(int i=0; i<this->len; i++){
		std::cout << this->tab[i];// << std::endl;
	}
	std::cout << std::endl;
}


/*************** main test ***************/
int main(){
	string s;
	std::cout << s.gettab() << std::endl;
	std::cout << "s.getlength() : " <<s.getlength() << std::endl;
	int l1 = s.length();
	std::cout << "l1 : " <<l1 << std::endl;

	/*char my_tab2 [4];
	my_tab2[0]='H';
	my_tab2[1]='e';
	my_tab2[2]='y';
	my_tab2[3]='\0'; //déclaration ok
*/

	char my_tab[8]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
	//const char* my_tab="Bonjour"; // déclaration ok
	/*
	for(int i; i<(sizeof (my_tab)/sizeof(char)); i++){
	//	std::cout << my_tab[i] << std::endl;
	}
	*/

	//std::cout << my_tab << std::endl;
	//std::cout << printf("%s",my_tab) << std::endl; // il y a un 7 à la fin jsp pk
	//std::cout << printf("%s",my_tab2) << std::endl;

	string s2(my_tab);
	s2.print();
	}
