/*10. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. 
La función debe imprimir la tabla de multiplicar desde el 12 al 1. Por ejemplo:

5 x 12 = 60

5 x 11 = 55

5 x 10 = 50

...

...

5 x 1 = 5*/

#include <iostream>

using namespace std;

int NumeroEntero(int N)
{
  cout << "\nFUNCION QUE RECIBE UN ENTERO QUE INDICA UNA TABLA DE MULTIPLICAR Y LA IMPRIME DESDE EL 12 AL 1: ";
  for (int i = 12; i >= 1; i--)
  {
    cout << "\n" <<  N << " x " << i << " = " << (N*i) << endl;
  }
  return N;
}
int main()
{
    NumeroEntero(7);
    return 0;
}