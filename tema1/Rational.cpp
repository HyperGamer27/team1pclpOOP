#include "Pereche.h"
#include "Rational.h"
#include <iostream>

Rational::Rational(int x, int y)
{
    Pereche p;
    p.setX(x);
    p.setY(y);
    if(!y)
    {
        std::cout << "Numitorul este 0.\nValorile au fost initializate automat cu 1 si 1\n";
        p.setX(1);
        p.setY(1);
    }
    this->p = p;
}

void Rational::setP(int x, int y)
{
    Pereche p;
    p.setX(x);
    p.setY(y);
    this->p = p;
}

Pereche Rational::getP()
{
    return this->p;
}

Rational Rational::operator+(Rational r)
{
    Pereche p1, p2;
    p1 = this->p;
    p2 = r.getP();
    int a = p1.getX();
    int b = p1.getY();
    int c = p2.getX();
    int d = p2.getY();
    int numarator = a*d+b*c;
    int numitor = b*d;
    if(!numitor)
    {
        std::cout << "Numitorul este 0.\nValorile au fost initializate automat cu 1 si 1\n";
        numarator = 1;
        numitor = 1;
    }
    Rational rez(numarator, numitor);
    return rez;
}

Rational Rational::operator-(Rational r)
{
    Pereche p1, p2;
    p1 = this->p;
    p2 = r.getP();
    int a = p1.getX();
    int b = p1.getY();
    int c = p2.getX();
    int d = p2.getY();
    int numarator = a*d-b*c;
    int numitor = b*d;
    if(!numitor)
    {
        std::cout << "Numitorul este 0.\nValorile au fost initializate automat cu 1 si 1\n";
        numarator = 1;
        numitor = 1;
    }
    Rational rez(numarator, numitor);
    return rez;
}

Rational Rational::operator*(Rational r)
{
    Pereche p1, p2;
    p1 = this->p;
    p2 = r.getP();
    int a = p1.getX();
    int b = p1.getY();
    int c = p2.getX();
    int d = p2.getY();
    int numarator = a*c;
    int numitor = b*d;
    if(!numitor)
    {
        std::cout << "Numitorul este 0.\nValorile au fost initializate automat cu 1 si 1\n";
        numarator = 1;
        numitor = 1;
    }
    Rational rez(numarator, numitor);
    return rez;
}

Rational Rational::operator/(Rational r)
{
    Pereche p1, p2;
    p1 = this->p;
    p2 = r.getP();
    int a = p1.getX();
    int b = p1.getY();
    int c = p2.getX();
    int d = p2.getY();
    int numarator = a*d;
    int numitor = b*c;
    if(!numitor)
    {
        std::cout << "Numitorul este 0.\nValorile au fost initializate automat cu 1 si 1\n";
        numarator = 1;
        numitor = 1;
    }
    Rational rez(numarator, numitor);
    return rez;
}


void Rational::simplificare()
{
    Pereche pair_ = this->p;
    int numarator, numitor;
    numarator = pair_.getX();
    numitor = pair_.getY();
    int max_ = std::max(numitor, numarator);
    if(numarator < 0 && numitor < 0)
    {
        max_ = std::max(-numitor, -numarator);
        numarator = -numarator;
        numitor = -numitor;
    }
    for(int i = 2; i < max_; i++)
        while(numarator % i == 0 && numitor % i == 0)
        {
            numarator /= i;
            numitor /= i;
        }
    pair_.setX(numarator);
    pair_.setY(numitor);
    this->p = pair_;
}
