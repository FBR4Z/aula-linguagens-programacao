# Lendo o número de pessoas e as opiniões
Q = int(input())
opinioes = list(map(int, input().split()))

# Contando o número de pessoas satisfeitas e insatisfeitas
satisfatorias = sum(opiniao == 0 for opiniao in opinioes)
insatisfatorias = sum(opiniao == 1 for opiniao in opinioes)

# Verificando se a maioria está satisfeita ou não
if satisfatorias > insatisfatorias:
    print("Y")
else:
    print("N")
