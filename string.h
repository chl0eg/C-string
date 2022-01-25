class string{
        public :
                string (); //constructeur
                string (char* s); //autre constructeur
                string(const string& str); //copy constructeur

                char* gettab();//accesseur
                int getlength();//accesseur

                int length();// fonction length
                void print();//fonction print
                int max_size(); // fonction max_size donne size max que peut prendre un string
                void resize(int size_t,char c); // fonction resize



                //~string(); //destructor


        protected :
                char *tab;
                int len;
};
