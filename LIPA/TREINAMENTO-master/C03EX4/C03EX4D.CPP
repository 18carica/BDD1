#include <iostream>

using namespace std;

int main() {
  // Declara��o de vari�veis
  double DISTANCIA;
  double TEMPO;
  double VELOCIDADE;
  double LITROS_USADOS;

  // Leitura do tempo de viagem e da velocidade m�dia
  cout << "Digite o tempo de viagem: ";
  cin >> TEMPO;

  cout << "Digite a velocidade m�dia: ";
  cin >> VELOCIDADE;

  // C�lculo da dist�ncia percorrida
  DISTANCIA = TEMPO * VELOCIDADE;

  // C�lculo do consumo de combust�vel
  LITROS_USADOS = DISTANCIA / 12;

  // Impress�o dos resultados
  cout << "Velocidade m�dia: " << VELOCIDADE << endl;
  cout << "Tempo de viagem: " << TEMPO << endl;
  cout << "Dist�ncia percorrida: " << DISTANCIA << endl;
  cout << "Consumo de combust�vel: " << LITROS_USADOS << endl;

  return 0;
}
