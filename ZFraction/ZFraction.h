#ifndef ZFRACTION_H
#define ZFRACTION_H


class ZFraction
{
public:
    ZFraction();
    ZFraction(int numerateur);
    ZFraction(int numerateur, int denominateur);
    ZFraction& operator+=(ZFraction const& fractionB);
    ZFraction& operator*=(ZFraction const& fracMultB);
    friend bool operator==(ZFraction const& a,ZFraction const& b);
//    friend bool operator<(ZFraction const& a,ZFraction const& b);
    bool plusPetit(ZFraction const& b) const;
    void afficher(std::ostream &flux) const;

private:
    int m_numerateur;
    int m_denominateur;
};

ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);

bool operator<(ZFraction const& a,ZFraction const& b);

std::ostream& operator<<( std::ostream &flux, ZFraction const& fraction);

#endif // ZFRACTION_H
