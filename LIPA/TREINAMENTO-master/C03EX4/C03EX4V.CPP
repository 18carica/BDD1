#include <iostream>

using namespace std;

int main() {
  int BASE, EXPOENTE, POTENCIA;

  // Leia BASE e EXPOENTE
  cout << "Digite a base e o expoente: ";
  cin >> BASE >> EXPOENTE;

  // POT�NCIA recebe BASE ** EXPOENTE
  POTENCIA = BASE ** EXPOENTE;

  // Imprima POT�NCIA
  cout << "A pot�ncia � " << POTENCIA << endl;

  return 0;
}
