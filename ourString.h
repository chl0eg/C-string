class ourString{
	public :
		ourString (); //constructeur
		ourString (char s);
		
		char* gettab();//accesseur
		
		int getLength(ourString s); //fonction
		~ourString(); //destructor
		
	protected :
		char tab[100];
};
