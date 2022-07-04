/*
2. Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. 
Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/

#include <iostream>

using namespace std; 

double Promediode3Numeros(double num1, double num2, double num3)
{
    double prom=(num1+num2+num3)/3;
    return prom;
}

int main()
{
    cout<<endl<<"\nFUNCIO QUE RECIBE 3 NUMEROS Y DEVUELVE EL PROMEDIO DE ESTOS: ";
    double num1, num2, num3;
    cout<<endl<<"\nIngrese el valor del primer numero: ";
    cin>>num1;
    cout<<endl<<"\nIngrese el valor del segundo numero: ";
    cin>>num2;
    cout<<endl<<"\nIngrese el valor del tercer numero: ";
    cin>>num3;
    cout<<endl<<"\nEL PROMEDIO DE LOS TRES NUMEROS DADOS ES: "<<Promediode3Numeros(num1, num2, num3);

    int suma=0;
    suma=num1+num2+num3;
    cout<<endl<<"La suma de estos tres numeros es: "<<suma;

    return 0;
}