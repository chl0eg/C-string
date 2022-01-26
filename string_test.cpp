#include <iostream>
#include <cstring> //pour memcpy
#include "string.h"

/*************** main test ***************/
int main(){

	// test déclaration par défaut et getter
	std::cout << "---------- test déclaration par défaut ----------"  << std::endl;
	string s;
	s.print();
  std::cout << std::endl;


	// test 2e constructeur avec print
  std::cout << "---------- test 2e constructeur avec print et getter ----------"  << std::endl;
	/*char my_tab2 [4];
	my_tab2[0]='H';
	my_tab2[1]='e';
	my_tab2[2]='y';
	my_tab2[3]='\0'; //déclaration ok
*/
	char my_tab[100]={'B','o','n','j','o','u','r','\0'}; // déclaration ok
	string s2(my_tab);
	s2.print();
  std::cout << "s2.getlength() : " <<s2.getlength() << std::endl;
  std::cout << "s2.gettab() : " <<s2.gettab() << std::endl;
	int l = s2.length();
	std::cout << "l de s2 : " << l << std::endl;
  std::cout << std::endl;


	//test max_size
  std::cout << "---------- test max size ----------"  << std::endl;
	std::cout << "s2.max_size() : " << s2.max_size() << std::endl;
  std::cout << std::endl;


	// test resize avec size et char
	std::cout << "---------- test resize avec size et char ----------"  << std::endl;
  std::cout<< "resize plus grand" <<std::endl;
  s2.resize(10,'!');
	s2.print();
  std::cout<< "resize plus court" <<std::endl;
	s2.resize(5,'!');
	s2.print();
	//s2.resize(110,'!');
  std::cout << std::endl;


	// test resize avec size
  std::cout << "---------- test resize avec size ----------"  << std::endl;
  string s6(my_tab);
  std::cout<< "resize plus grand" <<std::endl;
  s6.resize(10);
	s6.print();
  std::cout<< "resize plus court" <<std::endl;
  s6.resize(5);
	s6.print();
	//s2.resize(110);
  std::cout << std::endl;


	// Test opérateurs
  std::cout << "---------- test opérateurs ----------"  << std::endl;
	char my_tab2[100]={'H','e','y','\0'}; // déclaration ok
	string s3(my_tab2);
	std::cout << "s3: "  << std::endl;
	s3.print();
	std::cout << "s3 avec a: "  << std::endl;
	s3+='a';
	s3.print();
	std::cout << s3.getlength() << std::endl;

	string s4;
	s4=s2;
	std::cout << "s2: "  << std::endl;
	s2.print();
	std::cout << "s4 copy de s2: " << std::endl;
	s4.print();

	string s5;
	s5=s2+'a';
	std::cout << "s5 = s2 avec a: "  << std::endl;
	s5.print();

	}
