class string{
	public :
		string (); //constructeur
		string (char s);
		
		char* gettab();//accesseur
		
		int getLength(ourString s); //fonction
		//~string(); //destructor
		
	protected :
		char tab[100];
};
