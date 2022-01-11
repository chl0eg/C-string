class string{
        public :
                string (); //constructeur
                string (char* s); //autre constructeur
                string(const string& str); //copy constructeur

                char* gettab();//accesseur
                int* getlength();//accesseur

                int length();// fonction length



                //~string(); //destructor


        protected :
                char tab[100];
                int len;
};

