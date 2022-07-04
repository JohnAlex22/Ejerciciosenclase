/* 
3. Escriba la función que determina si un número pasado como parámetro es par o impar.
*/

#include <iostream>

using namespace std;

void participar (int num)
{
    cout<<endl<<"Ingrese el numero ";
    cin>>num;
    if (num % 2 == 0 )
    {
        cout<<endl<<"El numero "<< num <<" Es par";
    }
    
    else
    {
        cout<<endl<<"El numero "<< num <<" Es impar";
    }
}
int main()
{
    participar(14);
    return 0;
}