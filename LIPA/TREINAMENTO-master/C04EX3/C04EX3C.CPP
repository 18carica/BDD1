#include <iostream>

using namespace std;

int main() {
  float N1, N2, N3, N4, MD;

  // Leia N1, N2, N3 e N4
  cout << "Digite as notas de N1, N2, N3 e N4: ";
  cin >> N1 >> N2 >> N3 >> N4;

  // Calcule a m�dia
  MD = (N1 + N2 + N3 + N4) / 4;

  // Se a m�dia for >= 5, o aluno � aprovado
  if (MD >= 5) {
    cout << "Aluno Aprovado, com m�dia = " << MD << endl;
  }
  // Sen�o, o aluno � reprovado
  else {
    cout << "Aluno Reprovado, com m�dia = " << MD << endl;
  }

  return 0;
}
