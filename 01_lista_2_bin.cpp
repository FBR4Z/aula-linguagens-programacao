#include <iostream>
#include <vector>

using namespace std;

// Função para converter um número inteiro para binário
vector<int> decimalParaBinario(int numero) {
    vector<int> binario;

    // Caso o número seja zero, o binário será 0
    if (numero == 0) {
        binario.push_back(0);
    }
    else {
        // Enquanto o número for diferente de zero
        while (numero != 0) {
            // Obtém o resto da divisão por 2 (0 ou 1)
            int resto = numero % 2;
            // Insere o resto na frente do vetor binário
            binario.insert(binario.begin(), resto);
            // Divide o número por 2 para a próxima iteração
            numero /= 2;
        }
    }

    return binario;
}

// Função para contar a quantidade de 1s no vetor binário
int contarUns(vector<int> binario) {
    int count = 0;

    for (int bit : binario) {
        if (bit == 1) {
            count++;
        }
    }

    return count;
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Chama a função para converter o número em binário
    vector<int> binario = decimalParaBinario(numero);

    // Exibe o resultado da conversão
    cout << "O numero " << numero << " em binario e: ";
    for (int bit : binario) {
        cout << bit;
    }
    cout << endl;

    // Chama a função para contar a quantidade de 1s
    int quantidadeUns = contarUns(binario);

    // Exibe a quantidade de 1s no número
    cout << "A quantidade de uns no numero binario e: " << quantidadeUns << endl;

    return 0;
}
