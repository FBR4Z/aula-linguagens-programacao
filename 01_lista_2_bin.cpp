#include <iostream>
#include <vector>
#include <cmath>

// Função para contar o número de "1s" na representação binária de um número decimal
int contar_uns_binarios(long long numero) {
    int count = 0;
    while (numero > 0) {
        count += numero & 1; // Verifica se o último bit é 1
        numero >>= 1; // Desloca para a direita para verificar o próximo bit
    }
    return count;
}

// Função para verificar se o método de cálculo para números grandes deve ser usado
bool usar_metodo_numeros_grandes(long long numero) {
    // Se o número tiver mais de 12 dígitos, use o método de cálculo para números grandes
    return (int)std::log10(numero) >= 12;
}

int main() {
    int quantidade_numeros;
    //std::cout << "Digite a quantidade de numeros a serem testados: ";
    std::cin >> quantidade_numeros;

    std::vector<long long> numeros(quantidade_numeros);
    std::vector<int> quantidade_uns(quantidade_numeros);

    for (int i = 0; i < quantidade_numeros; ++i) {
        //std::cout << "Digite o " << i + 1 << "o numero: ";
        std::cin >> numeros[i];

        // Verifica se o método de cálculo para números grandes deve ser usado
        if (usar_metodo_numeros_grandes(numeros[i])) {
            long long decimal = numeros[i];
            int tamanho_parte = 1;
            while (decimal / tamanho_parte > 10) {
                tamanho_parte *= 10;
            }
            int total_uns = 0;

            // Converte o número em partes menores e conta os "1s" em cada parte
            long long parte = 0;
            while (decimal > 0) {
                parte = decimal % tamanho_parte;
                total_uns += contar_uns_binarios(parte);
                decimal /= tamanho_parte;
            }

            quantidade_uns[i] = total_uns;
        } else {
            quantidade_uns[i] = contar_uns_binarios(numeros[i]);
        }
    }

    // Exibe a quantidade de "1s" para cada número
    //std::cout << "\nQuantidade de '1s' para cada numero:" << std::endl;
    for (int i = 0; i < quantidade_numeros; ++i) {
        //std::cout << "Numero " << i + 1 << ": " << quantidade_uns[i] << std::endl;
        std::cout << quantidade_uns[i] << std::endl;
    }

    return 0;
}
