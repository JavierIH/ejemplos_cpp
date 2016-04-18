#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
  //Algunas variables
  bool booleano;
  int entero;
  float decimal;
  char caracter;

  long entero_grande;
  double decimal_grande;
  string cadena;

  //Vamos a comprobar el tamaño de estas variables
  cout << "Tipo int: " << sizeof(int) << " bytes" << endl;

  //Asignamos valores a algunas variables
  entero = 42;
  decimal = 3.14;
  caracter = 'X';

  //Printamos las variables
  cout << "\nLa variable entero es: " << entero << endl;
  cout << "\nLa variable decimal es: " << decimal << endl;
  cout << "\nLa variable caracter es: " << caracter << endl;

  //Asignamos valores en otro formato;
  entero = 3.14;
  decimal = 'X';
  caracter = 42;

  cout << "\nLa variable entero es: " << entero << endl;
  cout << "\nLa variable decimal es: " << decimal << endl;
  cout << "\nLa variable caracter es: " << caracter << endl;

  //Asignamos otra vez valores
  caracter = 'A';
  cout << "\nLa variable caracter es: " << caracter << endl;
  cout << "\nLa variable caracter en formato int es: " << (int)caracter << endl;
}
