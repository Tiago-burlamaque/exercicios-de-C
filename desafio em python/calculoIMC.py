def calculadoraIMC():
    peso = float(input("Digite seu peso: "))
    altura = float(input("Digite sua altura: "))
    resultado = peso / (altura * altura)

    if resultado < 18.5:
        print(f"{resultado:.1f} você está Abaixo do peso.")
    elif resultado > 18.5 and resultado < 24.9:
        print(f"{resultado:.1f} você está no Peso normal.")
    elif resultado > 25.0 and resultado < 29.9:
        print(f"{resultado:.1f} você está com sobrepeso.")
    elif resultado > 30.0 and resultado < 39.9:
        print(f"{resultado:.1f} você está com obesidade.")
    else: 
        print(f"{resultado:.1f} você está com obesidade grave.")

calculadoraIMC()