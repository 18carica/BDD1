#include <iostream>

using namespace std;

int main() {
  double VELOCIDADE, DISTANCIA, TEMPO;

  // Leia DIST�NCIA e TEMPO
  cout << "Digite a dist�ncia (em km) e o tempo (em minutos): ";
  cin >> DISTANCIA >> TEMPO;

  // VELOCIDADE recebe (DIST�NCIA * 1000) / (TEMPO * 60)
  VELOCIDADE = (DISTANCIA * 1000) / (TEMPO * 60);

  // Imprima VELOCIDADE
  cout << "A velocidade � de " << VELOCIDADE << " km/h" << endl;

  return 0;
}
