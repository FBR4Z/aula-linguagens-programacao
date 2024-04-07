#include <iostream>
#include <vector>

// Função para converter um número decimal para binário usando divisões sucessivas
std::vector<int> decimal_para_binario(long long numero, int& quantidade_1s) {
    std::vector<int> binario;

    // Caso especial para o número 0
    if (numero == 0) {
        binario.push_back(0);
        quantidade_1s = 0;
        return binario;
    }

    // Realiza divisões sucessivas por 2 até que o número se torne zero
    while (numero > 0) {
        int resto = numero % 2;
        binario.push_back(resto); // Armazena o resto da divisão (0 ou 1) no vetor
        if (resto == 1) {
            quantidade_1s++; // Incrementa a quantidade de 1s
        }
        numero /= 2; // Divide o número por 2
    }

    return binario;
}

int main() {
    // Exemplo com um número que ultrapassa os limites das variáveis padrões
    unsigned long long numero = 123456789123456789;
    int quantidade_1s = 0;

    // Converte o número decimal para binário
    std::vector<int> binario = decimal_para_binario(numero, quantidade_1s);

    // Exibe o número binário (em ordem inversa)
    std::cout << "Numero binario: ";
    for (int i = binario.size() - 1; i >= 0; --i) {
        std::cout << binario[i];
    }
    std::cout << std::endl;

    // Exibe a quantidade de 1s no número binário
    std::cout << "Quantidade de '1s': " << quantidade_1s << std::endl;

    return 0;
}
