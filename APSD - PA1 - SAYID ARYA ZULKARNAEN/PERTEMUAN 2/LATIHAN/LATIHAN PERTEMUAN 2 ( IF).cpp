#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Masukan sebuah angka: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " adalah bilangan genap.";
  else
    cout << n << " adalah bilangan ganjil.";

}

