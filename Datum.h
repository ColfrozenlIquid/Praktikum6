#ifndef DATUM_H
#define DATUM_H
#include <iostream>
using namespace std;

class Datum{
public:
    Datum(int j, int m, int t): jahr(j), monat(m), tag(t)
    {  }

    void print(){ cout << tag << "." << monat << "." << jahr; }

    int jahr, monat, tag;
};


#endif // DATUM_H
