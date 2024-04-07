def contar_1s_binarios(numero):
    # Converte o número decimal para binário e remove o prefixo '0b'
    binario = bin(numero)[2:]
    # Conta a quantidade de '1s' na forma binária
    quantidade_1s = binario.count('1')
    return quantidade_1s

def main():
    # Solicita que o usuário insira a quantidade de números
    #quantidade_numeros = int(input("Digite a quantidade de números a serem testados: "))
    quantidade_numeros = int(input())
    numeros = []

    # Solicita que o usuário insira os números
    for i in range(quantidade_numeros):
        #numero = int(input(f"Digite o {i + 1}º número: "))
        numero = int(input())
        numeros.append(numero)

    # Calcula a quantidade de '1s' na forma binária para cada número
    for i, numero in enumerate(numeros):
        quantidade_1s = contar_1s_binarios(numero)
        #print(f"Quantidade de '1s' na forma binária do {i + 1}º número:", quantidade_1s)
        print(quantidade_1s)

if __name__ == "__main__":
    main()
