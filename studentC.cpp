#include "string.h"
#include <stddef.h>

#include <iostream>

using std::cout;
using std::endl;

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



string::string(const char* s){ //constructeur str donné
	int l=0;
	while (s[l]!='\0'){
		l++;
	}
	len=l;
	capacity_=len;
	tab = new char[capacity_];
	memcpy(tab,s,len);
	tab[len]='\0';

}

string::~string(){
    delete tab;
    cout<< "string is being deleted" << endl;
}

/*test*/
bool string::empty() const{
	return (len == 0);
}

int string::getlength(){ //get length
	return this -> len;
	}

char* string::gettab(){ //get tab pas utiliser pour string vide
	return this->tab;
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
		this->capacity_=st;
	}

	if (st>this->len){
		//std::cout << "long" << std::endl;

		for(int i = this->len; i<st;i++){
			this->tab[i]='\0';
		}
		this->tab[st]='\0';
		memcpy(this->tab,this->tab,st);
		this->capacity_=st;
	}

	if(st>100){
		std::cout << "! string trop grand !" << std::endl;
	}
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

string& string::operator += (const string& str)
{
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

string& string::operator = (const string& str){
	if(len!=0){
		delete[] tab;
	}
	len=str.len;
	tab=new char[len+1];
	memcpy(tab,str.tab,len+1);
	this->capacity_ = len;
	return *this;
}

string operator + (const string& str1, const string& str2){
	string new_str;
	new_str=str1;
	new_str+= str2;
	/*new_str.capacity()=str1.capacity()+str2.capacity();*/
	return new_str;
}


void string::print(){
	std::cout << this->tab <<std::endl;
}

int string::length() const{
	if (tab==nullptr){
		return 0;
	}
	else{
		return this -> len;
	}
}

int main(){
    char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
    string s2(my_tab);
	/*s2.resize(0);*/
	cout<<"is empty?"<<s2.empty()<< endl;

    /*cout<<my_tab<< endl;*/

    s2.print();
	s2="yes";
	cout<<s2.capacity()<< endl;
	s2.print();

	char my_tab2[100]={'A','i','m','e','r','\0'}; // déclaration ok
    string s3(my_tab2);
	s3+=s2;//aimeryes
	cout<<s3.capacity()<< endl;//8
	s3.print();//aimeryes
	(s2+s3).print();//yesaimeryes
	/*s2+=s3;*/
	cout<<(s2+s3).capacity()<< endl;
	s2.reserve(1);
	cout<<s2.capacity()<< endl;
	cout<<s2.length()<< endl;
	s2.resize(10);
	cout<<s2.capacity()<< endl;
	//5


	}

/*size_t string::capacity(){

}*/
