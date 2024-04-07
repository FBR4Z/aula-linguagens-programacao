#include <iostream>
#include <string>
#include <vector>
#include <gmpxx.h> // Incluir a biblioteca GMP

// Fun��o para contar o n�mero de "1s" na representa��o bin�ria de um n�mero decimal
int contar_uns_binarios(const mpz_class& numero) {
    int count = 0;

    // Converte o n�mero decimal para sua representa��o bin�ria e conta os "1s"
    mpz_class temp = numero;
    while (temp > 0) {
        if (temp % 2 == 1) {
            count++;
        }
        temp /= 2;
    }

    return count;
}

int main() {
    int quantidade_numeros;
    std::cout << "Digite a quantidade de numeros a serem testados: ";
    std::cin >> quantidade_numeros;

    std::vector<std::string> numeros(quantidade_numeros);
    std::vector<int> quantidade_uns(quantidade_numeros);

    // L� os n�meros como strings
    for (int i = 0; i < quantidade_numeros; ++i) {
        std::cout << "Digite o " << i + 1 << "o numero: ";
        std::cin >> numeros[i];
    }

    // Determina se o n�mero pode ser convertido com sucesso para mpz_class
    bool convertido_com_sucesso = true;
    std::vector<mpz_class> numeros_mpz(quantidade_numeros);
    for (int i = 0; i < quantidade_numeros; ++i) {
        try {
            numeros_mpz[i] = mpz_class(numeros[i]);
        } catch (const std::invalid_argument&) {
            std::cerr << "Erro: o numero " << numeros[i] << " nao pode ser convertido para mpz_class." << std::endl;
            convertido_com_sucesso = false;
            break;
        }
    }

    if (convertido_com_sucesso) {
        // Calcula a quantidade de "1s" para cada n�mero e exibe o resultado
        for (int i = 0; i < quantidade_numeros; ++i) {
            quantidade_uns[i] = contar_uns_binarios(numeros_mpz[i]);
        }

        std::cout << "\nQuantidade de '1s' para cada numero:" << std::endl;
        for (int i = 0; i < quantidade_numeros; ++i) {
            std::cout << "Numero " << i + 1 << ": " << quantidade_uns[i] << std::endl;
        }
    }

    return 0;
}
