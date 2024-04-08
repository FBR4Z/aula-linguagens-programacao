def main():
    # Ler N (quantidade de alunos) e K (quantidade mínima de pessoas necessárias)
    N, K = map(int, input().split())
    
    # Ler os horários de chegada dos alunos
    horarios_chegada = list(map(int, input().split()))
    
    # Contar quantos alunos chegaram atrasados
    alunos_presentes = sum(1 for horario in horarios_chegada if horario <= 0)
    
    # Verificar se o número mínimo de pessoas foi alcançado e se não há alunos atrasados
    if alunos_presentes >= K:
        print("YES")
    else:
        print("NO")

    # print(alunos_presentes)

if __name__ == "__main__":
    main()
