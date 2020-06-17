m = int(input())
filhos = [int(input()) for c in range(2)]
filhos.append((m-sum(filhos)))
print(max(filhos))
