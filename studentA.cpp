#include "string.h"
#include <iostream>
#include <cstring>

int main(){
  string first;
  std::cout<<first.gettab()<<std::endl;
  std::cout<<first.length()<<std::endl;
  std::cout<<first.size()<<std::endl;
  string second(first);
  std::cout<<second.gettab()<<std::endl;

  std::cout<<second.c_str()<<std::endl;

  char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
	string s2(my_tab);
	std::cout << "s2 " << s2.gettab() << std::endl;
	s2.print();
  std::cout << "s2.max_size() : " << s2.max_size() << std::endl;

  s2.resize(10);
	s2.print();
	s2.resize(5);
	s2.print();
	s2.resize(110);


  return 0;
}

string::string(const string& str){ // copy constructeur
  len = str.len;
  tab = new char[len+1];
  strcpy(tab, str.tab);
}

// ATTENTION RENVOIT MOT AU LIEU D'ADRESSER
const char* string::c_str(){ // c_str()
  return tab;
}
