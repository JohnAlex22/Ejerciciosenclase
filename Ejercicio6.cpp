/*
6. Una función recibe 2 enteros como parámetros, el primero es el número base, 
mientras que el segundo indica el exponente al que se va elevar el número base. 
Por ejemplo, si el primer número es 2 y el segúndo número es 5, el proceso a realizar sería 2 x 2 x 2 x 2 x 2 = 32 
(en otras palabras 2 elevado a la quinta potencia).
*/
#include <iostream>

using namespace std; 
int potencia(int base, int exponente)
{
    int poten=1;
    for(int i=1; i<=exponente; i++)
    {
        poten*=base;
    }
    return poten;
}
int main()
{
    cout<<endl<<" 6 ELEVADO A LA 5 ES: "<<potencia(6,5);
    cout<<endl<<" 4 ELEVADO A LA 7 ES: "<<potencia(4,7);

    return 0;
}