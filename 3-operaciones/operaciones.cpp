#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
  int a;
  int b = 5;

  a = 1;

  int c = a + b;
  cout << " a) c vale: " << c;

  c = a + 12;
  cout << "\n b) c vale: " << c;

  c = c + 9;
  cout << "\n c) c vale: " << c;

  c = 2 * 3;
  cout << "\n d) c vale: " << c;

  c = 8 / 2;
  cout << "\n e) c vale: " << c;

  c = 9 / 2;
  cout << "\n f) c vale: " << c;

  float d = 9 / 2;
  cout << "\n g) d vale: " << d;

  d = 9.0 / 2;
  cout << "\n h) d vale: " << d;

  d = (float) 9 / 2;
  cout << "\n i) d vale: " << d;

  d = 9 / 2.0;
  cout << "\n j) d vale: " << d;

  d = 2 * 6 / 3;
  cout << "\n k) d vale: " << d;

  d = 2 + 7 / 3;
  cout << "\n l) d vale: " << d;

  d = (2 + 7) / 3;
  cout << "\n m) d vale: " << d;

  char e = 'a';
  e = e + 1;
  cout << "\n n) e vale: " << e;

}
