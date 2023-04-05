#ifndef RATIONAL_H_
#define RATIONAL_H_
#include "Pereche.h"

class Rational
{
public:
    Rational(int, int);
    void setP(int, int);
    Pereche getP();
    Rational operator+(Rational r);
    Rational operator-(Rational r);
    Rational operator*(Rational r);
    Rational operator/(Rational r);
    void simplificare();
private:
    Pereche p;
};


#endif // RATIONAL_H_
