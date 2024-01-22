#ifndef DATUM_H
#define DATUM_H
#include <iostream>

class Datum{
    public:
        Datum(int j, int m, int t): jahr(j), monat(m), tag(t)
        {  }

        void print(){ std::cout << tag << "." << monat << "." << jahr; }

        int jahr, monat, tag;
};

#endif // DATUM_H
