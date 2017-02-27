#include <iostream>
#include <ZFraction.h>
using namespace std;

int main()
{
    ZFraction a(4,5);      //Déclare une fraction valant 4/5
    //ZFraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
    //ZFraction c,d;         //Déclare deux fractions valant 0
    //cout << a;
    a.afficher();


    return 0;
}

