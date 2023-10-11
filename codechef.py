def findMinimal(N):
    N_str = str(N)
    n = len(N_str)
    
    if N % 8 == 0:
        return N
    
    for i in range(n):
        for j in range (i + 1, n):
            for k in range(j + 1, n):
                num = int(N_str[i] + N_str[j] + N_str[k])
                if num % 8 == 0:
                    return num
                
    return -1


T = int(input())
for _ in range(T):
    L, N = map(int, input().split())
    minimal = findMinimal(N)
    print(minimal)