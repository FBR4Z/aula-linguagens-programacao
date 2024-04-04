#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;

    cout << valor << endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade;

    for (int i = 0; i < 7; i++) {
        quantidade = valor / notas[i];
        cout << quantidade << " nota(s) de R$ " << notas[i] << ",00" << endl;
        valor = valor % notas[i];
    }

    return 0;
}
