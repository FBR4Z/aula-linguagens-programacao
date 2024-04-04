#include <iostream>
using namespace std;

int main() {
    int N;

    // Solicita o valor de N
    // cout << "Digite um valor inteiro N (5 < N < 2000): ";
    cin >> N;

    // Verifica se o valor de N está dentro do intervalo especificado
    if (N <= 5 || N >= 2000) {
        cout << "Valor de N fora do intervalo permitido." << endl;
        return 1;
    }

    // Calcula o quadrado de cada número par de 1 até N
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            int quadrado = i * i;
            cout << i << "^2 = " << quadrado << endl;
        }
    }

    return 0;
}
