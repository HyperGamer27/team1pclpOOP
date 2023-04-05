#include <iostream>
#include "Pereche.h"
#include "Rational.h"

using namespace std;

ostream& operator<<(ostream& os, Pereche p)
{
    os << "(" << p.getX() << ", " << p.getY() << ")\n";
    return os;
}

ostream& operator<<(ostream& os, Rational r)
{
    Pereche p = r.getP();
    os << "(" << p.getX() << ", " << p.getY() << ")\n";
    return os;
}

int main()
{
    Rational p(-2,3), r(2,6), s(1,5), t(-1,4);
    r.simplificare();
    cout << r << endl;
    r = r + s;
    p = p - r;
    t = t*p;
    s = p/r;

    Rational w(-2, 0);

    t.simplificare();
    p.simplificare();
    r.simplificare();
    s.simplificare();
    w.simplificare();

    cout << p << endl << r << endl << s << endl << t << endl << w << endl;
    return 0;
}
