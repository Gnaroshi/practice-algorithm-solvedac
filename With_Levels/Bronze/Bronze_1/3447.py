# problem: 버그왕
# id: 3447
# tag:
# time taken:
b = "BUG"
while True:
    try:
        s = input()
        while b in s:
            s = s.replace(b, "")
        print(s)
    except:
        break
