#include <iostream>
#include <vector>
using namespace std;

// Função para calcular o número de Fibonacci
unsigned long long fibonacci(int n, vector<unsigned long long>& memo) {
    if (n <= 1)
        return n;
    
    if (memo[n] != 0)
        return memo[n];

    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int T;
    cin >> T;

    vector<unsigned long long> memo(61, 0); // Memoization para armazenar valores já calculados

    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        cout << "Fib(" << N << ") = " << fibonacci(N, memo) << endl;
    }

    return 0;
}
