#include <iostream>
#include <vector>

using namespace std;

// FunÁ„o para converter um n˙mero inteiro para bin·rio
vector <int> decimal_para_binario(int numero) {
    vector <int> binario;

    // Caso o numero seja zero, o bin·rio ser· 0
    if (numero == 0) {
        binario.push_back(0);
    }
    else {
        // Enquanto o n√∫mero for diferente de zero
        while (numero != 0) {
            // Obt√©m o resto da divis√£o por 2 (0 ou 1)
            int resto = numero % 2;
            // Insere o resto na frente do vetor bin√°rio
            binario.insert(binario.begin(), resto);
            // Divide o n√∫mero por 2 para a pr√≥xima itera√ß√£o
            numero /= 2;
        }
    }

    return binario;
}

// Fun√ß√£o para contar a quantidade de 1s no vetor bin√°rio
int contar_uns(vector<int> binario) {
    int count = 0;

    for (int bit : binario) {
        if (bit == 1) {
            count++;
        }
    }

    return count;
}

int main() {
    unsigned int numero, quantidade_de_numeros;

    //Solicita a quantidade de n√∫meros que ser√° contado os 1s
    //cout << "Digite a quantidade de n√∫meros que ser√° feita a opera√ß√£o: ";
    cin >> quantidade_de_numeros;
    vector <int> armazena_quantide_de_uns;
    vector <int> armazena_numeros_testados;

    for (int i = 0; i < quantidade_de_numeros; i++)
    {
        // Solicita ao usu·rio que insira um n˙mero inteiro
        //cout << "Digite um numero inteiro: ";
        cin >> numero;
        //armazena_numeros_testados.at(i) = numero;

        // Chama a funÁ„o para converter o n√∫mero em bin√°rio
        //vector<int> binario = decimal_para_binario(numero);

        // Exibe o resultado da convers„o
        //cout << "O numero " << numero << " em binario e: ";
        /*
            for (int bit : binario) {
                cout << bit;
            }
            cout << endl;
        */
        

        // Chama a funÁ„o para contar a quantidade de 1s
        //int quantidade_uns = contar_uns(binario);

        // Exibe a quantidade de 1s no n˙mero
        //cout << "A quantidade de uns no numero binario e: " << quantidadeUns << endl;
        //cout << quantidade_uns;
        //cout << endl;
        armazena_quantide_de_uns.push_back(contar_uns(decimal_para_binario(numero)));
        //cout << armazena_quantide_de_uns[i] << endl;
    }
    
    //cout << armazena_quantide_de_uns[1] << endl;
    for (int i : armazena_quantide_de_uns) {
    cout << i << endl;
        }
    

    return 0;
}
