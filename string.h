#include <stddef.h> //pour size_t
class string{
        public :
                string (); //constructeur
                string (const char* s); //autre constructeur
                string (const string& str); //copy constructeur
                ~string(); //destructor


                const char* c_str();
                int getlength();//accesseur
                char* gettab();//accesseur

                int length() const;// fonction length
                int size() const;// fonction length
                void print();//fonction print
                int max_size(); // fonction max_size donne size max que peut prendre un string
                void resize(size_t st);
                void resize(size_t st,char c); // fonction resize
                void clear();
                bool empty() const;

                string& operator = (const string&);
                string& operator = (const char* s);
                string& operator = (char c);
                string& operator += (char c);
                string& operator += (const string& str);



        protected :
                char* tab;
                int len;
                int capacity;
};

string operator + (const string&, char);
string operator + (const string& str1, const string& str2);
