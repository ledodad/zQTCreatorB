#include <iostream>
#include <ZFraction.h>
using namespace std;

int main()
{
    ZFraction a(1,5);      //Déclare une fraction valant 4/5
    ZFraction b(4,5);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
    ZFraction c,d;         //Déclare deux fractions valant 0
    c = a+b;               //Calcule 4/5 + 2/1 = 14/5
    d = a*b;               //Calcule 4/5 * 2/1 = 8/5

    if(a==b)
    {
            cout << "a est egal a b." << endl;
    }

    if(a<b)
    {
            cout << "a est plus petit que b" << endl;
    }

//    if(a > b)
//           cout << "a est plus grand que b." << endl;
//       else if(a==b)
//           cout << "a est egal a b." << endl;
//       else
//           cout << "a est plus petit que b." << endl;



    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}

