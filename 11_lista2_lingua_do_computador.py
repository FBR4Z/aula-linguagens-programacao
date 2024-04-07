def main():
    # Inicializa o maior valor encontrado como o menor valor possível
    maior_soma = float('-inf')

    # Recebe 4 conjuntos de 7 valores
    for _ in range(4):
        valores = input("Digite os 7 valores separados por espaço: ").split()
        
        # Calcula a soma dos valores de cada conjunto
        soma = sum(map(int, valores))

        # Atualiza a maior soma encontrada, se necessário
        if soma > maior_soma:
            maior_soma = soma
    
    # Exibe a maior soma encontrada
    print("A maior soma é:", maior_soma)

if __name__ == "__main__":
    main()
