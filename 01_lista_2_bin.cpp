#include <iostream>
#include <vector>
#include <cmath>

// Fun��o para contar o n�mero de "1s" na representa��o bin�ria de um n�mero decimal
int contar_uns_binarios(long long numero) {
    int count = 0;
    while (numero > 0) {
        count += numero & 1; // Verifica se o �ltimo bit � 1
        numero >>= 1; // Desloca para a direita para verificar o pr�ximo bit
    }
    return count;
}

// Fun��o para verificar se o m�todo de c�lculo para n�meros grandes deve ser usado
bool usar_metodo_numeros_grandes(long long numero) {
    // Se o n�mero tiver mais de 12 d�gitos, use o m�todo de c�lculo para n�meros grandes
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

        // Verifica se o m�todo de c�lculo para n�meros grandes deve ser usado
        if (usar_metodo_numeros_grandes(numeros[i])) {
            long long decimal = numeros[i];
            int tamanho_parte = 1;
            while (decimal / tamanho_parte > 10) {
                tamanho_parte *= 10;
            }
            int total_uns = 0;

            // Converte o n�mero em partes menores e conta os "1s" em cada parte
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

    // Exibe a quantidade de "1s" para cada n�mero
    //std::cout << "\nQuantidade de '1s' para cada numero:" << std::endl;
    for (int i = 0; i < quantidade_numeros; ++i) {
        //std::cout << "Numero " << i + 1 << ": " << quantidade_uns[i] << std::endl;
        std::cout << quantidade_uns[i] << std::endl;
    }

    return 0;
}
