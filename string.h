class string{
	public :
		string (); //constructeur
		string (char s); //autre constructeur
		string(const string& str); //copy constructeur

		char* gettab();//accesseur
		int length() const;// fonction length


		//~string(); //destructor

	protected :
		char tab[100];
};
