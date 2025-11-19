queijo = 15.00
pao = 6.50
refrigerante = 12.50

quantidade_queijo = int(input("Quantidade de queijo: "))
quantidade_pao = int(input("Quantidade de pao: "))
quantidade_refrigerante = int(input("Quantidade de refrigerante: "))

preco_total = (refrigerante * quantidade_refrigerante) + (queijo * quantidade_queijo) + (pao * quantidade_pao)

print("\nO preço total da sua compra é: ", preco_total)

