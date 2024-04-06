#include <windows.h>
#include <iostream>
//#include <locale.h>

using namespace std;

int main() {

    //setlocale(LC_ALL, "pt-BR");
    //system("chcp 1252 > nul");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    float altura;
    unsigned int idade;
    cout << "Digite sua altura: " << endl;
    cin >> altura;  
    cout << "Digite sua idade: " << endl;
    cin >> idade;   
    cout << "Sua altura é " << altura << " e sua idade é " << idade << endl;

    return 0;
    

}