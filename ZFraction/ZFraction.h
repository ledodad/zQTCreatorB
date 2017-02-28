#ifndef ZFRACTION_H
#define ZFRACTION_H


class ZFraction
{
public:
    ZFraction();
    ZFraction(int numerateur);
    ZFraction(int numerateur, int denominateur);
    //friend Cents operator+(const Cents &c1, const Cents &c2);
    friend ZFraction operator+(const ZFraction &num, const ZFraction  &den);
    //double dividiendo(int &num,int &den);
    //operator<<
    void afficher() const;



private:
    int m_numerateur;
    int m_denominateur;


};



#endif // ZFRACTION_H
