#include <iostream>

using namespace std;

int main()
{
  int a;
  cout << "Teclea un numero y pulsa enter: \n";

  cin >> a;
  cout << "\nEl numero es: " << a;

  char b;
  cout << "\nTeclea una letra y pulsa enter: \n";

  cin >> b;
  cout << "\nLa letra es: " << b;

  cout << "\nAhora vamos a sumar. Introduce dos numeros. \nPrimer número: ";
  int c;
  cin >> c;

  cout << "Segundo numero: ";
  int d;
  cin >> d;

  cout << "\n\n    LA SUMA ES IGUAL A: " << c + d;
}
