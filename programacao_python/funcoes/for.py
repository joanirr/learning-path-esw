for item in range(2, 9, 3):
    print(item)

nome = input('Digite seu nome: ')
for letra in nome:
    print(letra)

nomes = ['Marcos', 'Klebson', 'Ventura', 'Barreto', 'Voelz']
for nome in nomes:
    print(nome)

numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for numero in numeros:
    quadrado = numero ** 2
    print(f'O quadrado de {numero} é {quadrado}')

numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
soma = 0
for numero in numeros:
    soma += numero

print(f'A soma de todos os números é {soma}')

texto = "programação"
letra_para_contar = 'r'
contador = 0

for letra in texto:
    if letra == letra_para_contar:
        contador += 1

print(f"A letra '{letra_para_contar}' aparece {contador} vezes na palavra '{texto}'")



