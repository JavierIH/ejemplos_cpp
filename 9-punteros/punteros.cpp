#include <iostream>

using namespace std;

void doblar(int *ptr){
  *ptr = *ptr * 2;
}

int main()
{
  int *puntero;
  int numero = 19;

  puntero = &numero;

  cout << "El puntero apunta a: " << puntero << endl;
  cout << "Y ahí hay un: " << *puntero << endl;

  *puntero = 10;
  cout << "Ahora la variable original es: " << numero << endl;

  doblar(puntero);
  cout << "Despues de doblar hay un: " << *puntero << endl;

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  puntero = &array[0];
  cout << "Ahora el puntero apunta al elemento 0 del array, que es: " << *puntero << endl;

  puntero++;
  cout << "Ahora el puntero apunta al elemento 0+1 (1) del array, que es: " << *puntero << endl;

  puntero=puntero+200;
  cout << "Ahora apunta a un lugar fuera del array, donde hay un valor: " << *puntero << endl;

}
