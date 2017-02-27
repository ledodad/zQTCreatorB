#ifndef ZFRACTION_H
#define ZFRACTION_H


class ZFraction
{
public:
    ZFraction(int numerateur=0, int denominateur=0);
    double dividiendo(int &num,int &den);
    //operator<<
    void afficher() const;



private:
    int m_numerateur;
    int m_denominateur;


};



#endif // ZFRACTION_H
