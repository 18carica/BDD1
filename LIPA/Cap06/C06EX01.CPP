//C06EX01.CPP

#include <iostream>
using namespace std;

int main(void)
{
    int IDADE = 25;     //Em vez de 0 pode ser usado NULL or ptrnull(que o ponteiro n�o est� apontando para xx endere�o de memo�ria), [or int *PIDADE = &IDADE;].
    int *PIDADE = 0;    //  int[(tipo de dado)na verdade ela n�o e um tipo e sim um limitador] estabelece o limite da variavel ponteiro.

    PIDADE = &IDADE;

    cout << "O valor idade " << IDADE << " esta armazenado";
    cout << " no endere�o de memoria " << PIDADE << endl;

    cout << endl;
    cout << "Tecle <Enter> para encenrrar.... ";
    cin.get();
    return 0;
}
