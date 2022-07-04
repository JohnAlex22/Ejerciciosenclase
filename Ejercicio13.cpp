/*
13. Diseñe la función que devuelve el resultado de la siguiente serie:

1 - 2 + 3 - 4 + 5 - 6 + 7 - N

N es un parámetro que indica el límite de la serie
*/

#include <iostream>
#include <cmath>

using namespace std;

void DevuelveElResultado(int N) 
{
    int l=0;
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            l+=i;
        }
        else
        {
            l-=i;
        }
    }
    cout << l <<endl;
}
int main()
{
    DevuelveElResultado(7);
    return 0;
}