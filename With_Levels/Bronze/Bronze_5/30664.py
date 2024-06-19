# problem: Loteria Falha
# id: 30664
# tag:
# time taken:


while True:
    n = int(input())
    if n == 0:
        break

    if n % 42 == 0:
        print("PREMIADO")

    else:
        print("TENTE NOVAMENTE")
