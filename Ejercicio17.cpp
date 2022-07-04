/*
17. Figura en espejo: Una función recibe como parámetro un entero que indica las filas de una figura.
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es 'o', la figura sería:
o
oo
ooo
oooo
ooo
oo
o
*/
#include <iostream>

using namespace std;  
void figura(int fila)
{
   string x="o";

    for (int i=1; i<=fila; ++i)
    {
   for (int c=1; c<=i; ++c)
   {
    cout<<x;
   }
   cout<<endl;
    }
    for (int i=fila; i>=1; i--)
    {
   for (int c=i; c>=1; c--)
    {
    cout<<x;
   }
   cout<<endl;
    }
   
}

int main()
{
    figura(10);
}