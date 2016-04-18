#include <iostream>

using namespace std;

int main()
{
  //Array
  int array[5];
  array[0] = 9;
  cout << "array[0] vale: " << array[0] << endl;

  int array2[] = {0, 1, 2, 3, 4};
  cout << "array2[4] vale: " << array2[3] << endl;


  //Recorrer array
  for (int i = 0; i < 5; i++)
  {
    array[i] = (i+2)*4;
  }

  cout << "Array completo: ";
  for (int i = 0; i < 5; i++)
  {
    cout << array[i] << "   ";
  }


  //Recorrer matriz
  cout << "\n\nVamos a repasar las tablas de multiplicar con una matriz!!!\n\n";

  int matriz[10][10];

  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      matriz[i][j]=(i+1)*(j+1);
    }
  }

  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      cout << matriz[i][j] << "\t";
    }
    cout << endl;
  }
}
