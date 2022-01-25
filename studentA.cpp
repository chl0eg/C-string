#include "string.h"
#include <iostream>
#include <cstring>

int main(){
  string first;
  std::cout<<first.gettab()<<std::endl;
  string second(first);
  std::cout<<second.gettab()<<std::endl;

  std::cout<<second.c_str()<<std::endl;

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
