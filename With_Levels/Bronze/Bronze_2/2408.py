# problem: 큰 수 계산
# id: 2408
# time taken:

st = ""
n = int(input())
for i in range(2 * n - 1):
    st += input()
st = st.replace("/", "//")
print(eval(st))
