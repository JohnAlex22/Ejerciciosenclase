/*
11. Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. 
La función debe imprimir las tablas de múltiplicar desde el 1 a N. Por ejemplo, si N=3, se imprimirá:

Tabla del 1
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10

Tabla del 2
2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20

Tabla del 3
3 x 1 = 3
3 x 2 = 3
...
3 x 10 = 30
*/

#include <iostream>

using namespace std; 

void tablas(int n)
{
    cout<<endl<<"DISEÑE UNA FUNCION QUE RECIBE UN ENTERO N ENTRE 1 Y 10 Y DEBE IMPRIMIR LAS TABLAS DESDE EL 1 A N. ";
    for(int t=1; t<=n; t++)

    {
        for(int i=1; i<=10; i++)
        cout<<endl<< t << " x " << i << " = " <<(t*i);
        cout<<endl;
    }
}
main()
{
    tablas(7);
}