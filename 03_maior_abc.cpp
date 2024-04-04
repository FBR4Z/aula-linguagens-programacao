/*
Fábio Braz
Código que mostra o maior entre três valores
*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Solicita os valores de a, b e c
    cin >> a;
    cin >> b;
    cin >> c;

    // Verifica qual é o maior valor
    int maior;
    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;

    // Exibe o maior valor seguido da mensagem
    cout << maior << " eh o maior" << endl;

    return 0;
}