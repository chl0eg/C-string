#include <iostream>
#include <cstring> //pour memcpy
#include "string.h"

/*************** main test ***************/
int main(){

	// test déclaration par défaut et getter
	std::cout << "---------- test déclaration par défaut ----------"  << std::endl;
	string b;
	b.print();
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
	string b2(my_tab);
  std::cout<< "b2 is : " <<std::endl;
	b2.print();
  std::cout << "b2.getlength() : " <<b2.getlength() << std::endl;
  std::cout << "b2.gettab() : " <<b2.gettab() << std::endl;
	int l = b2.length();
	std::cout << "l de s2 : " << l << std::endl;

  std::cout << std::endl;


  // test copy constructor
  std::cout << "---------- test copy constructor ----------"  << std::endl;

	string first;
  first.print();

  string second(first);
  second.print();

  std::cout << std::endl;


  // test c_str() pour avoir adresse de tab
  std::cout << "---------- test c_str() ----------"  << std::endl;

	string s2(my_tab);
	std::cout << "s2 :" << std::endl;
	s2.print();
  std::cout<<(void*) s2.c_str()<<std::endl;

  std::cout << std::endl;


  // test size
  std::cout << "---------- test size() ----------"  << std::endl;

	std::cout<<first.length()<<std::endl;
  std::cout<<first.size()<<std::endl;

  std::cout << std::endl;


  // test clear
  std::cout << "---------- test clear()----------"  << std::endl;

	s2.clear();
  s2.print();
  std::cout<<s2.length()<<std::endl;

  std::cout << std::endl;


	//test max_size
  std::cout << "---------- test max size ----------"  << std::endl;
	std::cout << "b2.max_size() : " << b2.max_size() << std::endl;

  std::cout << std::endl;


	// test resize avec size et char
	std::cout << "---------- test resize avec size et char ----------"  << std::endl;
  std::cout<< "resize plus grand" <<std::endl;
  b2.resize(10,'!');
	b2.print();
  std::cout<< "resize plus court" <<std::endl;
	b2.resize(5,'!');
	b2.print();
	//s2.resize(110,'!');

  std::cout << std::endl;


	// test resize avec size
  std::cout << "---------- test resize avec size ----------"  << std::endl;
  string b6(my_tab);
  std::cout<< "resize plus grand" <<std::endl;
  b6.resize(10);
	b6.print();
  std::cout<< "resize plus court" <<std::endl;
  b6.resize(5);
	b6.print();
	//s2.resize(110);

  std::cout << std::endl;


  // test capacity
  std::cout << "---------- test capacity() ----------"  << std::endl;




  std::cout << std::endl;


  // test empty
  std::cout << "---------- test empty() ----------"  << std::endl;




  std::cout << std::endl;


  // test reserve
  std::cout << "---------- test reserve(size t) ----------"  << std::endl;




  std::cout << std::endl;


	// Test opérateurs
  std::cout << "---------- test opérateurs ----------"  << std::endl;

  std::cout << "-------------- operator += (char)"  << std::endl;
	char my_tab2[100]={'H','e','y','\0'}; // déclaration ok
	string b3(my_tab2);
	std::cout << "b3 is : "  << std::endl;
	b3.print();
	std::cout << "b3 avec a: "  << std::endl;
	b3+='a';
	b3.print();
	std::cout << b3.getlength() << std::endl;


  std::cout << "-------------- operator += (const string&)"  << std::endl;



  std::cout << "-------------- operator = (char)"  << std::endl;

	s2 = 't';
  s2.print();


  std::cout << "-------------- operator = (const char*)"  << std::endl;



  std::cout << "-------------- operator = (const string&)"  << std::endl;
	string b4;
	b4=b2;
	std::cout << "b2: "  << std::endl;
	b2.print();
	std::cout << "b4 copy de b2: " << std::endl;
	b4.print();

  std::cout << "-------------- operator + (const string& + char)"  << std::endl;
	string b5;
	b5=b2+'a';
	std::cout << "b5 = b2 + 'a': "  << std::endl;
	b5.print();

  std::cout << "-------------- operator + (const string& + const char*)"  << std::endl;

	char tab_Nat[100] = {'N','a','t','\0'};
  /*char tab_halie[100] = {'h','a','l','i','e','\0'};*/
	string Nat(tab_Nat);
  Nat.print();
  //string halie(tab_halie);
  char* halie = new char[100];
  halie[0] = 'h';
  halie[1] = 'a';
  halie[2] = 'l';
  halie[3] = 'i';
  halie[4] = 'e';
  halie[5] = '\0';
  std::cout<<halie<<std::endl;

  string prenom = Nat+halie;
  prenom.print();
  std::cout<<prenom.length()<<std::endl;


  std::cout << "-------------- operator + (const string& + const string&)"  << std::endl;



  //on voit bien qu'au fur et à mesure dans le terminal les strings sont deleted quand on en a plus besoin
	}
