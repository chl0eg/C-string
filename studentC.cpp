#include "string.h"

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



string::string(char* s){ //constructeur str donné
	int l=0;
	while (s[l]!='\0'){
		l++;
		}
	len=l;
	tab = new char[10];
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

void string::resize(int size_t){
/*
si size_t > longueur du string, on complètre tab avec le char c donné
si size_t < longueur du string, on cut tab
*/

	if (size_t<(this->len)){
		std::cout << "short" << std::endl;
		this->len=size_t;
		this->tab[this->len]='\0';
		memcpy(this->tab,this->tab,size_t);
	}

	if (size_t>this->len){
		std::cout << "long" << std::endl;

		for(int i = this->len; i<size_t;i++){
			this->tab[i]='\0';
		}
		this->len=size_t;
		this->tab[this->len]='\0';
		memcpy(this->tab,this->tab,size_t);
	}

	if(size_t>100){
		std::cout << "! string trop grand !" << std::endl;
	}

}

string& string::operator = (const char* s){

	if (this->len != 0)
		delete [] tab;

    int l = 0;
	while (s[l]!='\0'){
		l++;
	}

	len = l;
	tab = new char[len+1];
	memcpy(tab,s,len);
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

	return *this;
}



/*string operator + (const string& str1, const string& str2){
	len = str1.len + str2.len;

	char* data = new char[len+1];
	for (int i; i<str1.len; i++){
		data[i]=str1.tab[i];
		}

	for (int i=str1.len; i<len; i++){
		data[i]=str2.tab[i-str1.len];
		}


	return string(data);
}*/
string& string::operator = (const string& str){
	if(len!=0){
		delete[] tab;
	}
	len=str.len;
	tab=new char[len+1];
	memcpy(tab,str.tab,len+1);
	return *this;
}

string operator + (const string& str1, const string& str2){
	string new_str;
	new_str=str1;
	new_str+= str2;
	return new_str;
}


void string::print(){
	std::cout << this->tab <<std::endl;
}



int main(){
    char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
    string s2(my_tab);
	/*s2.resize(0);*/
	cout<<"is empty?"<<s2.empty()<< endl;

    /*cout<<my_tab<< endl;*/

    s2.print();
	s2="yes";
	s2.print();

	char my_tab2[100]={'A','i','m','e','r','\0'}; // déclaration ok
    string s3(my_tab2);
	s3+=s2;
	s3.print();
	(s2+s3).print();
	/*s2+=s3;*/

	}

/*size_t string::capacity(){

}*/
