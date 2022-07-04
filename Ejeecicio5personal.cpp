/*
5. Escriba la función que recibe como parámetro 1 entero y devuelve el cubo del mismo.
*/

#include <iostream>

using namespace std; 

int cubo(int num)
{
    /*
      int x = num * num * num;
      return x;
    */
   return (num * num * num);
}

int main()
{
    cout<<endl<<"Ejercicios con funciones";
    cout<<endl<<"Funcion que devuelve el cubo de un numero";
    cout<<endl<<"El cubo de 3 es : "<<cubo(3);
    cout<<endl<<"El cubo de 5 es : "<<cubo(5);

    int n = cubo(7);
    n+=3;
    cout<<endl<<"El valor de n : "<<n;
    
    int x;
    cout<<endl<<"Ingresa un entero: ";
    cin>>x;
    cout<<"El cubo de "<< x << "es : " <<cubo(x);

    return 0;

}

