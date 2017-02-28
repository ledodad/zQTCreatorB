#ifndef ZFRACTION_H
#define ZFRACTION_H


class ZFraction
{
public:
    ZFraction();
    ZFraction(int numerateur);
    ZFraction(int numerateur, int denominateur);
    //double dividiendo(int &num,int &den);
    //operator<<
    void afficher() const;



private:
    int m_numerateur;
    int m_denominateur;


};



#endif // ZFRACTION_H
