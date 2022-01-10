class string{
	public :
		string (); //constructeur
		string (char s);

		int getLength(string s); //fonction
		~string(); //destructor

	protected :
		char tab[100];
};
