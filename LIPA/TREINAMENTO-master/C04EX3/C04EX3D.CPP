#include <iostream>

using namespace std;

int main() {
  float N1, N2, N3, N4, MD, NOVA_MD, EX;

  // Leia N1, N2, N3 e N4
  cout << "Digite as notas de N1, N2, N3 e N4: ";
  cin >> N1 >> N2 >> N3 >> N4;

  // Calcule a m�dia
  MD = (N1 + N2 + N3 + N4) / 4;

  // Se a m�dia for >= 7, o aluno � aprovado
  if (MD >= 7) {
    cout << "Aluno Aprovado, com m�dia = " << MD << endl;
  }
  // Sen�o, o aluno faz exame
  else {
    // Leia a nota do exame
    cout << "Digite a nota do exame: ";
    cin >> EX;

    // Calcule a m�dia final
    NOVA_MD = (MD + EX) / 2;

    // Se a m�dia final for >= 5, o aluno � aprovado
    if (NOVA_MD >= 5) {
      cout << "Aluno Aprovado em Exame, com m�dia final = " << NOVA_MD << endl;
    }
    // Sen�o, o aluno � reprovado
    else {
      cout << "Aluno Reprovado, com m�dia final = " << NOVA_MD << endl;
    }
  }

  return 0;
}
