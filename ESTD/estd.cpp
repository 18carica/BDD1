#include <iostream>
#include <locale> // Biblioteca para configura��o de localiza��o
#include <stack> // Biblioteca para pilha
#include <queue> // Biblioteca para fila

// Declara��es das estruturas de dados
std::queue<int> fila;
std::stack<int> pilha;

// Defini��es das fun��es
void adicionarNumeroFila() {
    int numero;
    std::cout << "Digite um n�mero para adicionar � fila: ";
    std::cin >> numero;
    fila.push(numero);
    std::cout << "N�mero " << numero << " adicionado � fila." << std::endl;
}

void removerNumeroFila() {
    if (!fila.empty()) {
        int numeroRemovido = fila.front();
        fila.pop();
        std::cout << "N�mero " << numeroRemovido << " removido da fila." << std::endl;
    } else {
        std::cout << "A fila est� vazia. N�o h� nada para remover." << std::endl;
    }
}

void mostrarPrimeiroUltimoFila() {
    if (!fila.empty()) {
        std::cout << "O primeiro n�mero da fila �: " << fila.front() << std::endl;
        std::cout << "O �ltimo n�mero da fila �: " << fila.back() << std::endl;
    } else {
        std::cout << "A fila est� vazia." << std::endl;
    }
}

void adicionarNumeroPilha() {
    int numero;
    std::cout << "Digite um n�mero para adicionar � pilha: ";
    std::cin >> numero;
    pilha.push(numero);
    std::cout << "N�mero " << numero << " adicionado � pilha." << std::endl;
}

void removerNumeroPilha() {
    if (!pilha.empty()) {
        int numeroRemovido = pilha.top();
        pilha.pop();
        std::cout << "N�mero " << numeroRemovido << " removido da pilha." << std::endl;
    } else {
        std::cout << "A pilha est� vazia. N�o h� nada para remover." << std::endl;
    }
}

void mostrarTopoPilha() {
    if (!pilha.empty()) {
        std::cout << "O topo da pilha �: " << pilha.top() << std::endl;
    } else {
        std::cout << "A pilha est� vazia." << std::endl;
    }
}

void menuFila() {
    int opcao;

    std::cout << "================ MENU FILA ================" << std::endl;
    std::cout << "1. Adicionar n�mero na fila" << std::endl;
    std::cout << "2. Remover n�mero da fila" << std::endl;
    std::cout << "3. Mostrar primeiro e �ltimo n�mero da fila" << std::endl;
    std::cout << "0. Voltar ao menu principal" << std::endl;
    std::cout << "===========================================" << std::endl;

    while (true) {
        std::cout << "Escolha uma op��o: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarNumeroFila();
                break;
            case 2:
                removerNumeroFila();
                break;
            case 3:
                mostrarPrimeiroUltimoFila();
                break;
            case 0:
                std::cout << "Voltando ao menu principal..." << std::endl;
                return;
            default:
                std::cout << "Op��o inv�lida. Por favor, escolha novamente." << std::endl;
        }
    }
}

void menuPilha() {
    int opcao;

    std::cout << "======== MENU PILHA ========" << std::endl;
    std::cout << "1. Adicionar n�mero na pilha" << std::endl;
    std::cout << "2. Remover n�mero da pilha" << std::endl;
    std::cout << "3. Mostrar topo da pilha" << std::endl;
    std::cout << "0. Voltar ao menu principal" << std::endl;
    std::cout << "============================" << std::endl;

    while (true) {
        std::cout << "Escolha uma op��o: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarNumeroPilha();
                break;
            case 2:
                removerNumeroPilha();
                break;
            case 3:
                mostrarTopoPilha();
                break;
            case 0:
                std::cout << "Voltando ao menu principal..." << std::endl;
                return;
            default:
                std::cout << "Op��o inv�lida. Por favor, escolha novamente." << std::endl;
        }
    }
}

void programa3() {
    std::cout << "Voc� escolheu o Programa 3." << std::endl;
    // Implemente o c�digo do Programa 3 aqui
}

void programa4() {
    std::cout << "Voc� escolheu o Programa 4." << std::endl;
    // Implemente o c�digo do Programa 4 aqui
}

void programa5() {
    std::cout << "Voc� escolheu o Programa 5." << std::endl;
    // Implemente o c�digo do Programa 5 aqui
}

int main() {
    int opcao;

    // Configura a localiza��o para Portugu�s
    setlocale(LC_ALL, "Portuguese");

    // Exibi��o do menu principal
    std::cout << "===== MENU PRINCIPAL ====="   << std::endl;
    std::cout << "1. Fila"                      << std::endl;
    std::cout << "2. Pilha"                     << std::endl;
    std::cout << "3. Programa 3"                << std::endl;
    std::cout << "4. Programa 4"                << std::endl;
    std::cout << "5. Programa 5"                << std::endl;
    std::cout << "0. Sair"                      << std::endl;
    std::cout << "=========================="   << std::endl;

    // Loop while para exibir o menu principal repetidamente at� que o usu�rio escolha sair (op��o 0)
    while (true) {
        std::cout << "Escolha uma op��o: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                menuFila();
                break;
            case 2:
                menuPilha();
                break;
            case 3:
                programa3();
                break;
            case 4:
                programa4();
                break;
            case 5:
                programa5();
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
