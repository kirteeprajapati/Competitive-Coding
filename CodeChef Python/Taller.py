# cook your dish here
for T in range(int(input())):
    X, Y = map(int, input().split())
    if(X>Y):
        print("A")
    elif (X==Y):
        print("Both are of same height")
    else:
        print("B")