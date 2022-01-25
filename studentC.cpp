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

int main(){
    char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
    string s2(my_tab);

    cout<<my_tab<< endl;

	}

/*size_t string::capacity(){

}*/
