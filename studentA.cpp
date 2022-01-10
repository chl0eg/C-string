#include "ourString.h"
#include <iostream>

int main(){
  string first;
  std::cout<<first.gettab()<<std::endl;
  string second(first);
  std::cout<<second.gettab()<<std::endl;

  return 0;
}

string::string(const string&){
  tab = string.tab;
}
