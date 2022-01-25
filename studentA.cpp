#include "string.h"
#include <iostream>

int main(){
  string first;
  first.print();
  std::cout<<first.length()<<std::endl;
  std::cout<<first.size()<<std::endl;

  string second(first);
  second.print();
  //std::cout<<(void*) second.c_str()<<std::endl;
  //std::cout<<second.length()<<std::endl;

  char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
	string s2(my_tab);
	std::cout << "s2 :" << std::endl;
	s2.print();
  std::cout<<(void*) s2.c_str()<<std::endl;
  s2.clear();
  s2.print();
  std::cout<<s2.length()<<std::endl;
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
  tab = str.tab;
}

const char* string::c_str(){ // c_str()
  return tab;
}

int string::size() const{
	if (tab==nullptr){
		return 0;
	}
	else{
		return this -> len;
	}

	}

void string::clear(){
  len = 0;
  //delete [] tab;
  tab = new char[1];
  tab[0] = '\0';
}
