#include <iostream>

using namespace std;

int main() {
  double P�S, METROS;

  // Leia P�S
  cout << "Digite o n�mero de p�s: ";
  cin >> P�S;

  // METROS recebe P�S * 0,3048
  METROS = P�S * 0.3048;

  // Imprima METROS
  cout << "O n�mero de metros � " << METROS << endl;

  return 0;
}
