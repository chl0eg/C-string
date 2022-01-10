#include "string.h"

#include <iostream>

using namespace std;

string::~string(){
  cout<< "string is being deleted" << endl;
}

/*test*/
int main(){
	string s;
	std::cout << s.gettab() << std::endl;
	}
