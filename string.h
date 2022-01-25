class string{
        public :
                string (); //constructeur
                string (char* s); //autre constructeur
                string(const string& str); //copy constructeur
                ~string(); //destructor


                const char* c_str();
                int getlength();//accesseur

                int length() const;// fonction length
                int size() const;// fonction length
                void print();//fonction print
                int max_size(); // fonction max_size donne size max que peut prendre un string
                void resize(int size_t);
                void resize(int size_t,char c); // fonction resize

                bool empty() const;

                string& operator = (const string&);
                string& operator = (const char* s);
                //string& operator + (const string&, char);


        protected :
                char* tab;
                int len;
};
