#include <iostream>
#include <locale>

// Defini��o do tamanho m�ximo do vetor
const int MAX_SIZE = 100;

// Estrutura de dados para a fila
struct Fila {
    int elementos[MAX_SIZE];
    int inicio;
    int fim;
};

// Fun��o para inicializar a fila
void inicializarFila(Fila &fila) {
    fila.inicio = 0;
    fila.fim = 0;
}

// Fun��o para verificar se a fila est� vazia
bool filaVazia(Fila &fila) {
    return fila.inicio == fila.fim;
}

// Fun��o para adicionar um elemento na fila
void enfileirar(Fila &fila, int valor) {
    fila.elementos[fila.fim] = valor;
    fila.fim++;
}

// Fun��o para remover um elemento da fila
int desenfileirar(Fila &fila) {
    int valor = fila.elementos[fila.inicio];
    fila.inicio++;
    return valor;
}

// Estrutura de dados para a pilha
struct Pilha {
    int elementos[MAX_SIZE];
    int topo;
};

// Fun��o para inicializar a pilha
void inicializarPilha(Pilha &pilha) {
    pilha.topo = 0;
}

// Fun��o para verificar se a pilha est� vazia
bool pilhaVazia(Pilha &pilha) {
    return pilha.topo == 0;
}

// Fun��o para adicionar um elemento na pilha
void empilhar(Pilha &pilha, int valor) {
    pilha.elementos[pilha.topo] = valor;
    pilha.topo++;
}

// Fun��o para remover um elemento da pilha
int desempilhar(Pilha &pilha) {
    pilha.topo--;
    return pilha.elementos[pilha.topo];
}

// Fun��es programa1 e programa2 utilizando fila e pilha, respectivamente
void programa1() {
    Fila fila;
    inicializarFila(fila);

    // Exemplo de utiliza��o da fila
    std::cout << "Programa 1 - Fila" << std::endl;
    enfileirar(fila, 1);
    enfileirar(fila, 2);
    enfileirar(fila, 3);

    while (!filaVazia(fila)) {
        std::cout << desenfileirar(fila) << " ";
    }
    std::cout << std::endl;
}

void programa2() {
    Pilha pilha;
    inicializarPilha(pilha);

    // Exemplo de utiliza��o da pilha
    std::cout << "Programa 2 - Pilha" << std::endl;
    empilhar(pilha, 1);
    empilhar(pilha, 2);
    empilhar(pilha, 3);

    while (!pilhaVazia(pilha)) {
        std::cout << desempilhar(pilha) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int opcao;

    // Configura a localiza��o para Portugu�s
    setlocale(LC_ALL, "Portuguese");

    // Exibi��o do menu
    std::cout << "===== MENU =====" << std::endl;
    std::cout << "1. Fila" << std::endl;
    std::cout << "2. Pilha" << std::endl;
    std::cout << "3. Programa 3" << std::endl;
    std::cout << "4. Programa 4" << std::endl;
    std::cout << "5. Programa 5" << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "================" << std::endl;

    // Loop while para exibir o menu repetidamente at� que o usu�rio escolha sair (op��o 0)
    while (true) {
        std::cout << "Escolha uma op��o: ";
        std::cin >> opcao;

        // Executa o programa correspondente � op��o escolhida
        switch (opcao) {
            case 1:
                programa1();
                break;
            case 2:
                programa2();
                break;
            case 3:
                // Adicione chamadas para os outros programas, se necess�rio
                break;
            case 4:
                // Adicione chamadas para os outros programas, se necess�rio
                break;
            case 5:
                // Adicione chamadas para os outros programas, se necess�rio
                break;
            case 0:
                std::cout << "Saindo..." << std::endl;
                return 0; // Termina o programa
            default:
                std::cout << "Op��o inv�lida. Por favor, escolha novamente." << std::endl;
        }
    }

    return 0;
}
