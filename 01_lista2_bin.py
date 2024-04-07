def contar_1s_binarios(numero):
    # Converte o número decimal para binário e remove o prefixo '0b'
    binario = bin(numero)[2:]
    # Conta a quantidade de '1s' na forma binária
    quantidade_1s = binario.count('1')
    return quantidade_1s

def main():
    # Solicita que o usuário insira um número decimal
    numero_decimal = int(input("Digite um número decimal: "))
    # Chama a função para contar os '1s' na forma binária do número e exibe o resultado
    quantidade_1s = contar_1s_binarios(numero_decimal)
    print("Quantidade de '1s' na forma binária:", quantidade_1s)

if __name__ == "__main__":
    main()
