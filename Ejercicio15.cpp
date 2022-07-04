/*
Diseñe la función que calcula el resultado de la siguiente serie:
2! - 3! + 4! - 5! + 6! - N!
N es un parámetro que indica el límite de la serie
Nota: El símbolo ! significa: factorial
*/

#include <iostream>

using namespace std; 

void Factorial(int N)
{
    int s; long int fac=1;
    for(int i=2; i<=N; i++)
    { 
       fac *= i;
       if(fac % 2==0)
       {
        s=(-fac)-s;
       }
       else
       {
        s = fac + s;
       }
    }
    cout << s << endl;
}
int main()
{
    Factorial(7);
    return 0;
}