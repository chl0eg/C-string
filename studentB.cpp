#include <iostream>
#include <cstring> //pour memcpy
#include <stddef.h> //pour size_t
#include "string.h"

/*************** constructeur de string ***************/
string::string (){ // ajout constructeur par défaut
	tab=nullptr;
	}



string::string(const char* s){ //constructeur str donné
	int l=0;
	while (s[l]!='\0'){
		l++;
	}
	len=l;
	tab = new char[len];
	memcpy(tab,s,len);
	tab[len]='\0';
	capacity=len;
}

string::~string(){
	delete tab;
	std::cout<< "string is being deleted" << std::endl;
}


/*************** accesseur ***************/

int string::getlength(){ //get length
	return this -> len;
}

char* string::gettab(){ //get tab pas utiliser pour string vide
	return this->tab;
}


/*************** fonction ***************/

int string::length() const{
	if (tab==nullptr){
		return 0;
	}
	else{
		return this -> len;
	}
}


void string::print(){
	if (tab==nullptr){
		std::cout << "votre string est vide" <<std::endl;
	}
	else{
		std::cout << this->tab <<std::endl;
	}
}


int string::max_size(){
	return 100;
}

void string::resize(size_t st){
/*
si size_t > longueur du string, on complètre tab avec le char c donné
si size_t < longueur du string, on cut tab
*/

	if (st<(this->len)){
		//std::cout << "short" << std::endl;
		this->len=st;
		this->tab[this->len]='\0';
		memcpy(this->tab,this->tab,st);
		this->capacity=st;
	}

	if (st>this->len){
		//std::cout << "long" << std::endl;

		for(int i = this->len; i<st;i++){
			this->tab[i]='\0';
		}
		this->tab[st]='\0';
		memcpy(this->tab,this->tab,st);
		this->capacity=st;
	}

	if(st>100){
		std::cout << "! string trop grand !" << std::endl;
	}

}

void string::resize(size_t st,char c){
/*
si size_t > longueur du string, on complètre tab avec le char c donné
si size_t < longueur du string, on cut tab
*/

	if (st<(this->len)){
		//std::cout << "short" << std::endl;
		this->len=st;
		this->tab[this->len]='\0';
		memcpy(this->tab,this->tab,st);
		this->capacity=st;
	}

	if (st>this->len){
		//std::cout << "long" << std::endl;

		for(int i = this->len; i<st;i++){
			this->tab[i]=c;
		}
		this->len=st;
		this->tab[this->len]='\0';
		memcpy(this->tab,this->tab,st);
		this->capacity=st;
	}

	if(st>100){
		std::cout << "! string trop grand !" << std::endl;
	}

}


/*************** fonction ***************/
string& string::operator = (const string& str){
	if(len!=0){
		delete[] tab;
	}
	len=str.len;
	tab=new char[len+1];
	memcpy(tab,str.tab,len+1);
	capacity=len;
	return *this;
}

string& string::operator += (char c){
	len+=1;
	char* nc= new char[len+1];
	nc=tab;
	nc[len-1]=c;
	memcpy(tab,nc,len);
	capacity=len;
	return *this;
}


string operator + (const string& str, char c){
	string new_str;
	new_str=str;
	new_str+= c;
	return new_str;
}
