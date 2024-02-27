#include <iostream>
#include <locale> // Biblioteca para configura��o de localiza��o


// Defini��es das fun��es dos programas
void programa1() {
    std::cout << "Voc� escolheu o Programa 1." << std::endl;
    // Implemente o c�digo do Programa 1 aqui
}

void programa2() {
    std::cout << "Voc� escolheu o Programa 2." << std::endl;
    // Implemente o c�digo do Programa 2 aqui
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

    // Exibi��o do menu
    std::cout << "===== MENU =====" << std::endl;
    std::cout << "1. Programa 1" << std::endl;
    std::cout << "2. Programa 2" << std::endl;
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
