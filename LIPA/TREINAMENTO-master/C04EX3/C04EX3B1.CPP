#include <iostream>

using namespace std;

int main() {
  int N, R;

  // Leia N
  cout << "Digite um n�mero: ";
  cin >> N;

  // Se N < 0, ent�o R recebe -N
  if (N < 0) {
    R = -N;
  }
  // Sen�o, R recebe N
  else {
    R = N;
  }

  // Imprima R
  cout << "O resultado � " << R << endl;

  return 0;
}
