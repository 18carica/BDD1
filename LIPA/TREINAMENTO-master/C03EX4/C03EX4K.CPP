#include <iostream>

using namespace std;

int main() {
  double R, US, COTA��O;

  // Leia US e COTA��O
  cout << "Digite o valor em d�lares americanos e a cota��o do real: ";
  cin >> US >> COTA��O;

  // R recebe US * COTA��O
  R = US * COTA��O;

  // Imprima o valor de R
  cout << "O valor em reais � " << R << endl;

  return 0;
}
