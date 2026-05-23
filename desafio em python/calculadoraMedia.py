

def calculoMedia ():
    nomeAluno = input("Digite seu nome: ")
    nota1 = int(input("Digite sua nota A: "))
    nota2 = int(input("Digite sua nota B: "))
    nota3 = int(input("Digite sua nota c: "))
    resultado = (nota1 + nota2 + nota3) / 3

    if resultado > 7:
        print(f"{nomeAluno} foi aprovado(a) com a nota de {resultado}.")
    elif resultado > 5 and resultado < 6.9:
        print(f"{nomeAluno} está de recuperação com a nota de {resultado}.")
    else:
        print(f"{nomeAluno} está reprovado com a nota de {resultado}.")

calculoMedia()