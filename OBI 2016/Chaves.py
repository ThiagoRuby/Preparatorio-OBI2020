n = int(input())

l = [input() for i in range(n)]

pilha = []
ok = True
for i in l:
    for j in i:
        if j == '{':
            pilha.append('{')
        elif j == '}':
            if len(pilha) == 0:
                ok = False
                break
            else:
                pilha.pop()

if(len(pilha) > 0):
    ok = False
    
if ok:
    print('S')
else:
    print('N')
            
