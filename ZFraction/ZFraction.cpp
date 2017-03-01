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



//ZFraction& operator+=(ZFraction const& frac1)
//{
//      m_numerateur=frac1.m_numerateur*frac2.m_denominateur;
//      m_denominateur=frac1.m_denominateur*frac2.m_denominateur;
//      return *this;
//}


//ZFraction ZFraction::suma(ZFraction const& fracSum2)
////int ZFraction::suma(int const& fracSum2) const
//{

//  m_numerateur=fracSum2.m_numerateur*fracSum2.m_denominateur;
//  m_denominateur=fracSum2.m_denominateur*fracSum2.m_denominateur;
//   return *this;
//}

//bool operator+(ZFraction const& a, ZFraction const& b)
//{
//    return a.suma(b);
//}


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




//bool ZFraction::estEgal(Duree const& b) const;
//{
//    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);     //Teste si a.m_heure == b.m_heure etc.
//}



//void operator+(ZFraction fracSum)
//{
//    fracSum=getVal().m_numerateur*getVal().m_denominateur;
//}

//ZFraction operator+(const ZFraction &num, const ZFraction &den)
//{
//    return ZFraction(num.m_numerateur+den.m_denominateur);
//}
