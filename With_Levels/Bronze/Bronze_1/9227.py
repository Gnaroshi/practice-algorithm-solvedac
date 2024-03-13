# problem: W**h y**r mouth out with s**p
# id: 9227
# time taken:

v = set()
while True:
    t = input()
    if t == "##":
        break
    v.add(t)

while True:
    t = input()
    if t == "#":
        break
    w = t.split()
    for i in w:
        if len(i) < 4:
            print(i, end=" ")
        elif (i[0] + i[3]) in v:
            print(i[0] + "**" + i[3:], end=" ")
        else:
            print(i, end=" ")
    print()
