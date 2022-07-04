/* 
24. Diseñe la función que recibe como parámetro 2 enteros y los devuelve intercambiados. 
Por ejemplo si num1=45 y num2=50, luego de llamar a la función num1 sería igual a 50 y num2 igual a 45.
*/
#include <iostream>
#include <conio.h>

using namespace std; 
void intercambio(int&, int&);

int main()
{
    int ent1, ent2;
    cout<<endl<<"Ingrese el valor del primer entero: ";
    cin>>ent1;
    cout<<endl<<"Ingrese el valor del segundo entero: ";
    cin>>ent2;

    intercambio(ent1,ent2);

    cout<<"\nEl nuevo valor del primer valor es: "<<ent1<<endl;
    cout<<"El nuevo valor del segundo valor es: "<<ent2<<endl;

    getch();
    return 0;
}

void intercambio(int& ent1, int& ent2)
{
    int aux;
    aux=ent1;
    ent1=ent2;
    ent2=aux;
}