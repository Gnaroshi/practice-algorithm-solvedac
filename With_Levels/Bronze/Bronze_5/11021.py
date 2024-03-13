tc = int(input())
for i in range(1, tc+1):
    input_string = input().split(' ')
    a = int(input_string[0])
    b = int(input_string[1])
    print("Case #"+str(i)+": "+str(a+b))
