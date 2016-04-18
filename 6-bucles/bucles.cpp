#include <iostream>

using namespace std;

int main()
{

  //Bucle while
  int a = 7;
  int contador = 0;
  while(a==7){
    cout << "\nHola desde dentro del bucle while!" << endl;
    cout << "Este es el ciclo " << contador << " del bucle";
    cout << "\n    Introduce un nuevo valor para a: ";
    cin >> a;
    contador = contador + 1;
  }
  cout << "\nFin del bucle while despues de " << contador << " vueltas\n\n\n\n\n";


  //Bucle do-while
  contador = 0;

  do
  {
    cout << "\nHola desde dentro del bucle do-while!" << endl;
    cout << "Este es el ciclo " << contador << " del bucle";
    cout << "\n    Introduce un nuevo valor para a: ";
    cin >> a;
    contador = contador + 1;
  }
  while(a==7 && contador<10);


  //Bucle for
  for (int i = 0; i <=10; i=i+1){
    cout << "\nHola desde dentro del bucle for! i es: " << i;
  }

}
