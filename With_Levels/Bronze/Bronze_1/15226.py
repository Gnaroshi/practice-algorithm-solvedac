# problem: House of Cards
# id: 15226
# time taken:

h = int(input())
# %8 = 0
# (3h^2 + h)%8 = 0
# h = 0 || 5
print(h + min((8 - h) % 8, (5 - h) % 8))
