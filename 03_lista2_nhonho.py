from itertools import permutations

def entradas(quantidade_de_testes):
    
    valores = []

    for i in quantidade_de_testes:
        valor = int(input())
        valores.append(valor)

    return valores

def teste(numero_de_teste):
    for perm in permutations(range(10), 5):
        print(perm)
        if sum(perm) == numero_de_teste:
            return perm
    return None
    

def main():
    #Digitar a quantidade de testes
    quantidade_testes = input("")
    vetor_valores = entradas(quantidade_testes)

    cont = 0
    for i in vetor_valores:

        if teste(vetor_valores[cont]) == None:
            print("impossivel")
        else:
            print(teste(vetor_valores[cont]))
        
        cont += cont

if __name__ == "__main__":
    main()