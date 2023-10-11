from math import isqrt

def solve():
    n = int(input().strip())
    a = list(map(int, input().strip().split()))
    cnt = [0, 0]
    for x in a:
        cnt[isqrt(x)**2 != x] += 1
    print(cnt[0] + (1 << cnt[1].bit_length()) - 1)

t = int(input().strip())
for _ in range(t):
    solve()
