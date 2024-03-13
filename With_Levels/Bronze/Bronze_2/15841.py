# problem: Virus Outbreak
# id: 15841
# time taken:

f = [0, 1]
for i in range(2, 491):
    f.append(f[i - 1] + f[i - 2])

while True:
    a = int(input())
    if a == -1:
        break
    print("Hour {0}: {1} cow(s) affected".format(a, f[a]))
