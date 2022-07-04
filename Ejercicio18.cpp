/* 
18. Una función que recibe 3 números enteros. 
La función devuelve verdadero si uno de estos números es la suma de los otros 2
*/
#include <iostream>
using namespace std;

bool NumerosEnteros(int num1, int num2, int num3)
{
    if (num1==num2 + num3)
        return true;
    if (num2==num1 + num3)
        return true;
    if (num3==num1 + num2)
        return true;
    else 
        return false;
}

int main ()
{
    bool x = NumerosEnteros(14,8,6);
    if (x==true)
    cout<<endl<<"Verdadero la suma de dos de estos tres numeros da como resultado el valor de uno de ellos ";
    else
    cout<<endl<<"Falso la suma de dos numeros de los tres no da como resultado el valor de uno de ellos ";
}