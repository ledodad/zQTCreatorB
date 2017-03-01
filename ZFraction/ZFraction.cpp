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

ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie += b;
    return copie;
}


ZFraction& ZFraction:: operator+=(ZFraction const& autre)
{
      m_numerateur=autre.m_numerateur*m_denominateur+autre.m_denominateur*m_numerateur;
      m_denominateur=autre.m_denominateur*m_denominateur;

      return *this;
}


ostream& operator<<(ostream &flux, ZFraction const& fraction )
{
    fraction.afficher(flux) ;
    return flux;
}

void ZFraction::afficher(ostream& flux) const
{
    if(m_denominateur == 1)
    {
        flux << m_numerateur;
    }
    else
    {
        flux << m_numerateur << '/' << m_denominateur;
    }
}
