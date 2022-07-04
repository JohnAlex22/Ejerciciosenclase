/*
9. Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. 
La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
...
5 x 15 = 75
*/
#include <iostream>
using namespace std;

void TablaDeMultiplicar(int n)
{
  for (int i; i <= 15; i++)
  {
  cout <<endl<< n << " x " << i << " = " << (n*i);
  }
  
}

int main ()
{
  TablaDeMultiplicar(8);

  return 0;
}