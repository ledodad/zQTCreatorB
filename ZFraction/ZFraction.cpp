#include<iostream>
#include <ZFraction.h>


ZFraction::ZFraction():m_numerateur(0),m_denominateur(0)
{

}

ZFraction::ZFraction(int numerateur, int denominateur):m_numerateur(numerateur),m_denominateur(denominateur)
{

}

ZFraction::ZFraction(int numerateur):m_numerateur(numerateur),m_denominateur(1)
{

}

int ZFraction::suma(ZFraction const& fracSum) const
{
    return (fracSum.m_numerateur*fracSum.m_denominateur);
}

bool operator+(ZFraction const& a, ZFraction const& b)
{
    return a.suma(b);
}



void ZFraction::afficher() const
{
    std::cout<<m_numerateur<<"/"<<m_denominateur<<std::endl;
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
