#ifndef ZFRACTION_H
#define ZFRACTION_H


class ZFraction
{
public:
    ZFraction();
    ZFraction(int numerateur);
    ZFraction(int numerateur, int denominateur);
    int suma(ZFraction const& result) const;
    //void getVal() const;
    //void getVal(const int &num,const int &den) const;
    void afficher() const;


private:
    int m_numerateur;
    int m_denominateur;


};

bool operator+(ZFraction const& a, ZFraction const& b);


#endif // ZFRACTION_H
