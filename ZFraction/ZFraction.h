#ifndef ZFRACTION_H
#define ZFRACTION_H


class ZFraction
{
public:
    ZFraction();
    ZFraction(int numerateur);
    ZFraction(int numerateur, int denominateur);

    ZFraction& operator+=(ZFraction const& fracSum);

    //ZFraction suma(ZFraction const& result) ;
    //int suma(int const& fracSum) const;

    void afficher(std::ostream &flux) const;

private:
    int m_numerateur;
    int m_denominateur;
};
std::ostream& operator<<( std::ostream &flux, ZFraction const& fraction);

ZFraction operator+(ZFraction const& a, ZFraction const& b);
//bool operator+(ZFraction const& a, ZFraction const& b);


#endif // ZFRACTION_H
