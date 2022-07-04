/*
23. Una función recibe como parámetro un entero que indica la edad de una persona en días. 
La función debe imprimir la edad de la persona en años, meses y días.
*/
#include <iostream>

using namespace std; 
void EdadDeLaPersona(int edad)
{
    int edad1;
    int dias;
    int meses;
    cout<<endl<<"\nLa edad de la persona en años es: "<<edad/365;
    dias=365;
    cout<<endl<<"\nLa edad de la persona en dias es: "<<(edad);
    meses=12;
    cout<<endl<<"\nLa edad de la persona en meses es: "<<(edad/30);
}
int main()
{
    EdadDeLaPersona(7000);
    return 0;
}