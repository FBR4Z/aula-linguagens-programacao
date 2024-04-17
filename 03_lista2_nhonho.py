from itertools import permutations

def entradas(quantidade_de_testes):
    
    valores = []

    for i in quantidade_de_testes:
        valor = int(input())
        valores.append(valor)

    return valores

def teste(numero_de_teste):
    # for perm in permutations(range(10), 5):
    #     print(perm)
    #     if sum(perm) == numero_de_teste:
    #         return perm
    # return None

     # Lista para armazenar as permutações válidas
    solucoes = []
    
    # Gerar todas as permutações de dígitos de 0 a 9 sem repetição
    for perm in permutations(range(10), 5):
        # Calcular o valor correspondente à soma de todos os números possíveis
        valor = int("".join(map(str, perm)))
        
        # Verificar se o valor é igual a K
        if valor == numero_de_teste:
            # Se for igual, adicionar a permutação à lista de soluções
            solucoes.append(perm)
    
    # Retornar a lista de permutações encontradas
    return solucoes
    

def main():
    #Digitar a quantidade de testes
    quantidade_testes = input("")
    vetor_valores = entradas(quantidade_testes)

    cont = 0
    for i in vetor_valores:
        print(teste(vetor_valores[cont]))
        

if __name__ == "__main__":
    main()