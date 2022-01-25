class string{
        public :
                string (); //constructeur
                string (char* s); //autre constructeur
                string(const string& str); //copy constructeur
                ~string(); //destructor


                const char* c_str();
                char* gettab();//accesseur
                int getlength();//accesseur

                int length() const;// fonction length
                void print();//fonction print
                int max_size(); // fonction max_size donne size max que peut prendre un string
                void resize(int size_t,char c); // fonction resize



        protected :
                char* tab;
                int len;
};
