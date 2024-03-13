# problem: Divisibility by 11
# id: 6976
# time taken:

tc = int(input())
for _ in range(tc):
    og = int(input())
    n = og
    while n >= 100:
        print(n)
        a = n % 10
        n //= 10
        n -= a
    print(n)
    if og % 11 == 0:
        print(f"The number {og} is divisible by 11.")
    else:
        print(f"The number {og} is not divisible by 11.")
    print()
