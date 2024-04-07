#include <iostream>
#include <vector>
#include <cmath>

// Fun��o para contar o n�mero de "1s" na representa��o bin�ria de um n�mero decimal
int contarUnsBinarios(long long numero) {
    int count = 0;

    // Converte o n�mero decimal para sua representa��o bin�ria e conta os "1s"
    while (numero > 0) {
        if (numero % 2 == 1) {
            count++;
        }
        numero /= 2;
    }

    return count;
}

int main() {
    int quantidadeNumeros;
    std::cout << "Digite a quantidade de numeros a serem testados: ";
    std::cin >> quantidadeNumeros;

    std::vector<long long> numeros(quantidadeNumeros);
    std::vector<int> quantidadeUns(quantidadeNumeros);

    for (int i = 0; i < quantidadeNumeros; ++i) {
        std::cout << "Digite o " << i + 1 << "o numero: ";
        std::cin >> numeros[i];

        // Calcula a quantidade de "1s" no n�mero e armazena no vetor
        long long decimal = numeros[i];
        int TAMANHO_PARTE = (int)pow(10, (int)log10(decimal) - 1); // Calcula o tamanho da parte
        int totalUns = 0;

        // Converte o n�mero em partes menores e conta os "1s" em cada parte
        long long parte = 0;
        while (decimal > 0) {
            parte = decimal % TAMANHO_PARTE;
            totalUns += contarUnsBinarios(parte);
            decimal /= TAMANHO_PARTE;
        }

        quantidadeUns[i] = totalUns;
    }

    // Exibe a quantidade de "1s" para cada n�mero
    std::cout << "\nQuantidade de '1s' para cada numero:" << std::endl;
    for (int i = 0; i < quantidadeNumeros; ++i) {
        std::cout << "Numero " << i + 1 << ": " << quantidadeUns[i] << std::endl;
    }

    return 0;
}
