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

//double ZFraction:: dividiendo(int &num,int &den)
//{
//    return m_numerateur/m_denominateur;
//}


void ZFraction::afficher() const
{
    std::cout<<m_numerateur<<"/"<<m_denominateur<<std::endl;
}
