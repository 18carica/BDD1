#include <iostream>

using namespace std;

int main() {
  double PRESTA��O, VALOR, TAXA, TEMPO;

  // Leia VALOR, TAXA e TEMPO
  cout << "Digite o valor, a taxa e o tempo: ";
  cin >> VALOR >> TAXA >> TEMPO;

  // PRESTA��O recebe VALOR + (VALOR * (TAXA / 100) * TEMPO)
  PRESTA��O = VALOR + (VALOR * (TAXA / 100) * TEMPO);

  // Imprima o valor de PRESTA��O
  cout << "A presta��o � " << PRESTA��O << endl;

  return 0;
}
