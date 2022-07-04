/*
8. Escriba la función que recibe como parámetro 1 entero positivo e imprime su equivalente en binario.
*/
#include <iostream>
using namespace std;

string binario(int n)
{   
    string bin;
    while (n!= 0)
    {
        bin += (n % 2 == 0 ? "0" : "1" );
        n/= 2;
    }
    return bin;
}

int main() 
{
    int num = 245;

    cout<<"El numero decimal es: "<< num << endl;
    cout<<"El binario de este numero es: "<< binario(num) << endl;

    return 0;
}