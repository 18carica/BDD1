#include <iostream>

using namespace std;

int main() {
  int VALOR, SUCESSOR, ANTECESSOR;

  // Leia VALOR
  cout << "Digite um valor: ";
  cin >> VALOR;

  // SUCESSOR recebe VALOR + 1
  SUCESSOR = VALOR + 1;

  // ANTECESSOR recebe VALOR - 1
  ANTECESSOR = VALOR - 1;

  // Imprima SUCESSOR e ANTECESSOR
  cout << "O sucessor � " << SUCESSOR << endl;
  cout << "O antecessor � " << ANTECESSOR << endl;

  return 0;
}
