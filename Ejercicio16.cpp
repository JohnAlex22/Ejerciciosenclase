/*
16. Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+
++
+++
++++

*/
#include <iostream>

using namespace std;

void filas(string fil, int numf)
{  
   cout<<endl<<"\nFUNCION QUE RECIBE UN ENTERO E INDICA LAS FILAS DE UNA FIGURA";
   for(int i = 1; i <= numf; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout <<fil;
        }
        cout <<endl;
    }
}

int main ()
{

    filas("+", 12);

    return 0;
}