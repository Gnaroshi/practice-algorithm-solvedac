n = int(input())
files = input().split(' ')
cluster_size = input()
cluster_size = int(cluster_size)

# print("size of files: " + str(len(files)))
# print(type(cluster_size))

files = list(map(int, files))

s = 0
for i in range(len(files)):
    if files[i] == 0:
        continue
    if files[i] <= cluster_size:
        s += 1
    else:
        temp = int(files[i] / cluster_size)
        s += temp
        if (files[i] % cluster_size != 0):
            s += 1

print(s*cluster_size)
