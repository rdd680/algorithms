#ifndef __STRING__
#define __STRING__

class String{
    private:
        //declare data members
        char * array;
        int length;
    public:
        //constructers/decons
        String(); //default(no values)
        String(const char*); //parameterized 
        ~String(); //destructor

        //functions

        // other functions
        unsigned int length();
        void reverse();
        void append(const char);
};

#endif