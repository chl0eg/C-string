#include "string.h"
#include <stddef.h> //pour size_t
#include <cstring> //pour memcpy
#include <iostream>

using std::cout;
using std::endl;


string::~string(){
    delete tab;
    cout<< "string is being deleted" << endl;
}

bool string::empty() const{
	return (len == 0);
}

size_t string::capacity(){
	return this->capacity_;
}

void string::reserve(size_t n){
	if (n>this->capacity_){
		this->capacity_ = n;
		char* tab2 = new char[this->capacity_ ];
		tab2 = this->tab;
		memcpy(this->tab,tab2,this->capacity_ );

	}
	else{
		std::cout << "Reserve une taille de stock plus petite que capacity!" << std::endl;
	}
}

string& string::operator = (const char* s){

	if (this->len != 0){
		delete [] tab;
	}

    int l = 0;
	while (s[l]!='\0'){
		l++;
	}

	len = l;
	tab = new char[len+1];
	memcpy(tab,s,len);
	this->capacity_=l;
	return *this;

}

string& string::operator += (const string& str){
	len += str.len;
	char* data = new char[len+1];
	memcpy(data, tab, len);


	for (int i=len-str.len; i<len; i++){
		data[i]=str.tab[i-len+str.len];
	}
	memcpy(tab, data, len);
	this->capacity_ +=str.capacity_;

	return *this;
}

string operator + (const string& str1, const string& str2){
	string new_str;
	new_str=str1;
	new_str+= str2;
	/*new_str.capacity()=str1.capacity()+str2.capacity();*/
	return new_str;
}
