def main():
    
    N = 1

    while(N != 0):

        #Ler a quantidade de pedras na caixa
        N = int(input())
        sorteio_ok = True
        numero_de_sorteios = 0

        while(sorteio_ok and N != 0):

            # Ler a ordem do sorteio
            ordem_sorteio = list(map(int, input().split()))
                
            # Contador que contabiliza ordem correta
            cont = 0
            # Verificar se a ordem está correta
            for pedra, valor in enumerate(ordem_sorteio):
                if pedra + 1 == valor:
                    cont += 1
            
            # Aumeta a quantidade de sorteios realizados
            numero_de_sorteios += 1

            #Muda variável para sair do loop caso a ordem do sorteio seja a correta
            if cont == N:
                #Imprime número de sorteios
                print(numero_de_sorteios)
                sorteio_ok = False
                           
        
if __name__ == "__main__":
    main()
