#include <iostream>
#include <string>

using namespace std;

int main() {
  string R, COTA��O;
  double r, cotacao;

  // Leia R e COTA��O
  cout << "Digite o valor em reais e a cota��o do d�lar americano: ";
  getline(cin, R);
  getline(cin, COTA��O);

  // Converta R e COTA��O para n�meros reais
  r = stod(R);
  cotacao = stod(COTA��O);

  // US recebe R / COTA��O
  US = r / cotacao;

  // Imprima o valor de US
  cout << "O valor em d�lares americanos � " << US << endl;

  return 0;
}
