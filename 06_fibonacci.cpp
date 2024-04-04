#include <iostream>
using namespace std;

// Função recursiva para calcular o número de Fibonacci
unsigned long long fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        cout << "Fib(" << N << ") = " << fibonacci(N) << endl;
    }

    return 0;
}
