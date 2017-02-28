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

ZFraction operator+(const ZFraction &num, const ZFraction &den)
{
    return ZFraction(num.m_numerateur+den.m_denominateur);
}

//Cents::Cents operator+(const Cents &c1, const Cents &c2)
//{
// return Cents(c1.m_cents + c2.m_cents);
//}


//double ZFraction:: dividiendo(int &num,int &den)
//{
//    return m_numerateur/m_denominateur;
//}


void ZFraction::afficher() const
{
    std::cout<<m_numerateur<<"/"<<m_denominateur<<std::endl;
}
