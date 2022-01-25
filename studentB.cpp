#include <iostream>
#include "string.h"

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

	tab = new char[len];
	tab = s;

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

int string::length (){
	return this -> len;
	}


void string::print(){
	std::cout << this->tab <<std::endl;
}


int string::max_size(){
	return 100;
}




/*************** main test ***************/
int main(){
	// test déclaration par défaut et getter
	string s;
	std::cout << "s gettab : " <<s.gettab() << std::endl;
	s.print();
	std::cout << "s.getlength() : " <<s.getlength() << std::endl;
	int l1 = s.length();
	std::cout << "l1 : " <<l1 << std::endl;

	// test 2e constructeur avec print
	/*char my_tab2 [4];
	my_tab2[0]='H';
	my_tab2[1]='e';
	my_tab2[2]='y';
	my_tab2[3]='\0'; //déclaration ok
*/
	char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
	string s2(my_tab);
	std::cout << "s2 " << s2.gettab() << std::endl;
	s2.print();


	//test max_size
	std::cout << "s2.max_size() : " << s2.max_size() << std::endl;

	// test resize
	/*s2.resize(10,'!');
	s2.print();
	s2.resize(5,'!');
	s2.print();
	s2.resize(5,'!');
	s2.print();
	*/
	}
