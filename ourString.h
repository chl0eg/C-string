class ourString{
	public :
		ourString (); //constructeur
		ourString (char s);

		int getLength(ourString s); //fonction
		~ourString(); //destructor
		
	protected :
		char tab[100];
};
