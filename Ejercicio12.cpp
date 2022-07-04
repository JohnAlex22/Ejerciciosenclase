/*
12. Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:

x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)

x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)

Los valores a,b,c pasan como parámetros de la función.

x1 - x2 son parámetros por referencia que devuelven los resultados de la ecuación.

La función devuelve 1 si es una ecuación válida, y 0 si la ecuación no es válida.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,a,b,c;

    cout<<"ingrese el valor a: ";cin>>a;
    cout<<"ingrese el valor b: ";cin>>b;
    cout<<"ingrese el valor c: ";cin>>c;
    
    x1=(-b+ sqrt(b*b - 4*a*c))/2*a;
    x2=(-b- sqrt(b*b - 4*a*c))/2*a;
    
    cout<<"RESULTADO DE LA PRIMERA SOLUCIÒN: "<<x1;
    cout<<"\n RESULTADO DE LA SEGUNDA SOLUCIÒN: "<<x2;
    return 0;
}