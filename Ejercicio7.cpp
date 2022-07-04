/*
7. Diseñe la función que determina la cantidad de cifras que tiene un número entero - este entero pasa como parámetro. Por ejemplo:

si el número es 12 tiene 2 cifras

si el número es 157 tiene 3 cifras

si el número es 999 tiene 3 cifras

si el número es 15000 tiene 5 cifras. 

si el número es -145 tiene 3 cifras
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<typename T>

size_t CantidadDeCifras(T n)
{
    string tmp;

    tmp = to_string(n);
    return tmp.size();
}


void Cifras(int num1, int num2)
{
    cout << "El numero de cifras en " << num1 << " es igual a: " << CantidadDeCifras(num1) << endl;
    cout << "El numero de cifras en " << num2 << " es igual a: " << CantidadDeCifras(num2) << endl;
}

int main()
{
    Cifras(25, 900);
    return 0;
}