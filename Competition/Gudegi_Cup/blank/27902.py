import sys
sys.set_int_max_str_digits(0)
n = int(input())
n = 2**n
d = []
while n > 0:
    d.append(n % 10)
    n //= 10
cnt = 0
for i in reversed(d):
    print(i, end='')
    cnt += 1
    # if cnt > 4300:
    #     break
print("cnt: " + str(cnt))
