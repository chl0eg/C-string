class string{
	public :
		string (); //constructeur
		string (char s);
		string(const string& str);

		char* gettab();//accesseur

		//~string(); //destructor

	protected :
		char tab[100];
};
