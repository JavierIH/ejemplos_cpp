#include <iostream>

using namespace std;

int main()
{
  //Primero vamos a jugar a cambiar el valor de un booleano
  bool a;

  a = 0;
  cout << a << endl;

  a = 1;
  cout << a << endl;

  a = 2;
  cout << a << endl;

  a = -1;
  cout << a << endl;

  a = true;
  cout << a << endl;

  a = false;
  cout << a << endl;


  //Ahora vamos a probar como funcionan las condicionales
  cout << "\n\n\n Vamos a probar una condicional";
  a = true;

  if (a)
  {
      cout << "\n\n Correcto, a es true";
  }

  a = false;

  if (a)
  {
    cout << "\n\n Blablablabla";
  }

  if (a)
  {
    cout << "\n\n Blablablabla";
  }
  else{
    cout << "\n\n Como a no es true, el programa entra en el else";
  }


  //Vamos a probar operadores logicos
  cout << "\n\n\n-------------------------------------------------------------";

  a = true;
  bool b = false;

  cout << "\nEl bool a es true y el bool b es false, por tanto: " << endl;

  cout << "\n    !a: " << !a;
  cout << "\n    !b: " << !b;
  cout << "\n    a && b: " << a && b;
  cout << "\n    b && a: " << b && a;
  cout << "\n    a || b: " << a || b;
  cout << "\n    b || a: " << b || a;

  cout << "\n\n\n-------------------------------------------------------------";

  int x = 11;
  int y = 23;

  cout << "\nEl int x es 11 y el int y es 23, por tanto: " << endl;

  cout << "\n    x==11: " << (x==11);
  cout << "\n    x==12: " << (x==12);
  cout << "\n    x==y: " << (x==y);
  cout << "\n    !x==11: " << (!x==11);
  cout << "\n    !(x==11): " << (!(x==11));
  cout << "\n    x>y: " << (x>y);
  cout << "\n    x<y: " << (x<y);
  cout << "\n    x>11: " << (x>11);
  cout << "\n    x>=11: " << (x>=11);
  cout << "\n    x<11: " << (x>11);
  cout << "\n    x<=11: " << (x<=11);
}
