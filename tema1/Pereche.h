#ifndef PERECHE_H_
#define PERECHE_H_

class Pereche
{
public:
    Pereche();
    Pereche(int, int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
private:
    int x, y;
};

#endif // PERECHE_H_
