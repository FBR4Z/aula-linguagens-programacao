#include <iostream>
using namespace std;

int main() {
    int A, B;

    // Solicita os valores de A e B
    // cout << "Digite o valor de A: ";
    cin >> A;
    // cout << "Digite o valor de B: ";
    cin >> B;

    // Verifica se os valores são múltiplos entre si
    if (A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}
