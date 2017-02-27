#include<iostream>
#include <ZFraction.h>


ZFraction::ZFraction(int numerateur, int denominateur):m_numerateur(numerateur),m_denominateur(denominateur)
{

}

double ZFraction:: dividiendo(int &num,int &den)
{
    return m_numerateur/m_denominateur;
}


void ZFraction::afficher() const
{
    std::cout<<m_numerateur<<"/"<<m_denominateur<<std::endl;
}

//void Duree::afficher() const
//{
//    cout << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
//}
