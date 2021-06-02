test = int(input())
for _ in range(test):
    px, py, qx, qy = list(map(int, input().rstrip().split()))
    rx = 2*qx - px
    ry = 2*qy - py
    print(rx, ry)
