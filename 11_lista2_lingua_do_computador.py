def main():
    # Inicializa a maior soma encontrada como o menor valor possível
    maior_soma = float('-inf')
    soma_final_binario = ""

    # Recebe 4 conjuntos de 7 valores
    for _ in range(4):
        # valores = input("Digite os 7 valores separados por espaço: ").split()
        valores = input().split()

        # A função split() é usada para dividir a entrada do usuário em uma lista de strings,
        # separando-as pelos espaços em branco. Isso cria uma lista com os 7 valores inseridos.
        
        # Calcula a soma dos valores de cada conjunto
        soma = sum(map(int, valores))
        
        # A função map() é usada para aplicar a função int() a cada elemento da lista de strings,
        # convertendo-os para inteiros. Isso cria uma lista de inteiros.
        # Em seguida, a função sum() é usada para calcular a soma de todos os valores da lista.
        
        # Converte a soma para binário
        #soma_binario = bin(soma)[2:]  # Remove o prefixo '0b'
        
        # Verifica se a soma atual é a maior encontrada até agora.
        # Se for, atualiza a maior soma e sua representação em binário.
        #soma_final_binario = soma_binario if soma > maior_soma else soma_final_binario
        if soma > maior_soma:
            maior_soma = soma
    
    # soma_final_binario = bin(maior_soma)[2:]  # Remove o prefixo '0b'

    
    # Exibe a maior soma encontrada junto com sua representação em binário
    #print("A maior soma é:", maior_soma)
    #print("Soma em binário:", soma_final_binario)
    print(maior_soma, " = ", bin(maior_soma)[2:])

if __name__ == "__main__":
    main()
