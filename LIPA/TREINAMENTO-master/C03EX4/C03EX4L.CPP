#include <iostream>

using namespace std;

int main() {
  double R, US, COTA��O;

  // Leia R e COTA��O
  cout << "Digite o valor em reais e a cota��o do d�lar americano: ";
  cin >> R >> COTA��O;

  // US recebe R / COTA��O
  US = R / COTA��O;

  // Imprima o valor de US
  cout << "O valor em d�lares americanos � " << US << endl;

  return 0;
}
