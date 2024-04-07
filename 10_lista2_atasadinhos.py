def main():
    # Ler N (quantidade de alunos) e K (quantidade mínima de pessoas necessárias)
    N, K = map(int, input().split())
    
    # Ler os horários de chegada dos alunos
    horarios_chegada = list(map(int, input().split()))
    
    # Contar quantos alunos chegaram atrasados
    alunos_atrasados = sum(1 for horario in horarios_chegada if horario > 0)
    
    # Verificar se o número mínimo de pessoas foi alcançado e se não há alunos atrasados
    if alunos_atrasados > 0 or N - alunos_atrasados < K:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    main()
