#include<iostream>
#include <ZFraction.h>
using namespace std;


ZFraction::ZFraction():m_numerateur(0),m_denominateur(1)
{
}

ZFraction::ZFraction(int numerateur):m_numerateur(numerateur),m_denominateur(1)
{
}

ZFraction::ZFraction(int numerateur, int denominateur):m_numerateur(numerateur),m_denominateur(denominateur)
{
}


ZFraction& ZFraction::operator+=(ZFraction const& fractionB)
{
      m_numerateur=fractionB.m_numerateur*m_denominateur+fractionB.m_denominateur*m_numerateur;
      m_denominateur=fractionB.m_denominateur*m_denominateur;
      return *this;
}

ZFraction& ZFraction::operator*=(ZFraction const& fractionB)
{
      m_numerateur=fractionB.m_numerateur*m_numerateur;
      m_denominateur=fractionB.m_denominateur*m_denominateur;
      return *this;
}


ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie += b;
    return copie;
}

 ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie *= b;
    return copie;
}

 bool ZFraction::plusPetit(ZFraction const& b) const
{
     return (m_numerateur*b.m_denominateur < m_denominateur*b.m_numerateur);

 }


 bool operator<(ZFraction const& a,ZFraction const& b)
 {
   return a.plusPetit(b);
 }

 bool operator>(ZFraction const& a,ZFraction const& b)
 {
    return (b.plusPetit(a));
 }

 bool operator<=(ZFraction const& a,ZFraction const& b)
 {
    if (a.plusPetit(b) || a==b)
        return true;
    else
        return false;
 }


 bool operator>=(ZFraction const& a,ZFraction const& b)
 {
    return !(a.plusPetit(b));
 }

bool operator==(ZFraction const& a,ZFraction const& b)
{
   return (a.m_numerateur==b.m_numerateur && a.m_denominateur==b.m_denominateur);
}



ostream& operator<<(ostream &flux, ZFraction const& fraction )
{
    fraction.afficher(flux) ;
    return flux;
}

void ZFraction::afficher(ostream& flux) const
{
    flux <<m_numerateur<<"/"<<m_denominateur;
}

//void ZFraction::afficher(ostream& flux) const
//{
//    if(m_denominateur == 1)
//    {
//        flux << m_numerateur;
//    }
//    else
//    {
//        flux << m_numerateur << '/' << m_denominateur;
//    }
//}
