#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double raio, area;
    const double PI = 3.14159;

    // Leitura do raio
    cin >> raio;

    // Cálculo da área
    area = PI * pow(raio, 2);

    // Impressão do resultado
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
