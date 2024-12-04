n_tests = int(input())

for i in range(n_tests):
    n = int(input())
    result = []
    for i in range(n):
        result.append(str(2*i+1))
    print(" ".join(result))
