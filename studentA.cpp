#include "string.h"
#include <iostream>

int main(){
  string first;
  std::cout<<first.gettab()<<std::endl;
  string second(first);
  std::cout<<second.gettab()<<std::endl;

  return 0;
}

string::string(const string& str){
  for(int i=0, i<=str.length(), i++){
    tab[i] = str.tab[i];
  }
}
