class Criptografia:

    """     @staticmethod
    Método estático pode ser chamado diretamente na classe, 
    sem a necessidade de criar uma instância da classe."""

    @staticmethod
    def criptografar(mensagem):
        # Primeira passada: deslocar caracteres
        mensagem_deslocada = ''
        for char in mensagem:
            if char.isalpha():
                if char.islower():
                    char = chr(((ord(char) - ord('a') + 3) % 26) + ord('a'))
                else:
                    char = chr(((ord(char) - ord('A') + 3) % 26) + ord('A'))
            mensagem_deslocada += char

        # Segunda passada: inverter a mensagem
        mensagem_invertida = mensagem_deslocada[::-1]

        # Terceira passada: deslocar caracteres da metade em diante para a esquerda
        metade = len(mensagem_invertida) // 2
        mensagem_final = ''
        for i, char in enumerate(mensagem_invertida):
            if i >= metade:
                char = chr(ord(char) - 1) if char.isalpha() else char
            mensagem_final += char

        return mensagem_final

def main():
    # Exemplo de uso
    #mensagem = "abcABC1"
    cont = int(input())
    mensagem_criptografada = []

    while cont >= 1:
        mensagem = input()
        mensagem_criptografada.append(Criptografia.criptografar(mensagem))
        #print("Mensagem criptografada:", mensagem_criptografada)
        cont = cont - 1

    for _ in mensagem_criptografada:
        print(_)

if __name__ == "__main__":
    main()
