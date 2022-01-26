#include "string.h"
#include <iostream>
#include <cstring>


string::string(const string& str){ // copy constructeur
  len = str.len;
  tab = str.tab;
  capacity = len;
}

const char* string::c_str(){ // c_str()
  return tab;
}

int string::size() const{ // size()
	if (tab==nullptr){
		return 0;
	}
	else{
		return this -> len;
	}

	}

void string::clear(){ // clear()
  len = 0;
  //delete [] tab;
  tab = nullptr;
  capacity = 0;
}

string& string::operator = (char c){ // operator = with char

	if (this->len != 1){
		delete [] tab;
  }

  len = 1;
	tab = new char[len+1];
  tab[0] = c;
  tab[len] = '\0';
  capacity = len;

  return *this;
}

string& string::operator += (const char* pc){ // operator += used for operator + with char*
  string pc_str(pc);
  int nlen = len + pc_str.len;

  char* nt = new char[nlen+1];
  for(int i=0; i<len; i++){
      nt[i]=tab[i];
  }
	for(int i=0; i<nlen; i++){
    nt[len+i]=pc[i];
  }
  len = nlen;
  tab = nt;
  capacity = len;
	memcpy(tab,nt,nlen);
  //delete [] nt;
  return *this;
}

string operator + (const string& strA, const char* pc){ // operator + with char*
  string new_str = strA;
  new_str += pc;
  return new_str;
}
