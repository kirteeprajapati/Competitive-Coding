# cook your dish here
for T in range(int(input())):
    X, Y, Z = map(int, input().split())
    if Z >= (X+Y):
        print("2")
    elif (X <= Z < (X+Y)):
        print("1")
    else:
        print("0")
