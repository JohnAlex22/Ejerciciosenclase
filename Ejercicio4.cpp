/*
4. Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/

#include <iostream>

using namespace std; 

void Multiplode5(int multiplo)
{
    cout<<endl<<"\nFUNCION QUE DETERMINA SI UN NUMERO ES MULTIPLO DE 5: ";
    if(multiplo % 5 ==0)
    {
        cout<<endl<<"\n" <<multiplo << " : ESTE NUMERO SI ES MULTIPLO DE 5";
    }
    else
    {
        cout<<endl<<"\n" <<multiplo << " : ESTE NUMERO NO ES MULTIPLO DE 5";
    }
}
int main()
{
    Multiplode5(1550);
    return 0;
}