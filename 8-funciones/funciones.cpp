#include <iostream>

using namespace std;

//Un par de funciones

void saludar()
{
  cout << "Holaaaaa!!!";
}

void insultar();

int sumar(int a, int b){
  int c = a + b;
  return c;
}

int main()
{
  saludar();
  insultar();
  int numero = sumar(2,3);
  cout << numero;
}


void insultar()
{
  cout << "parguela!!!";
}
