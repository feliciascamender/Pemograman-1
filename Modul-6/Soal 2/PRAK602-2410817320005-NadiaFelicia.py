aula_zetsu_putih = int(input()) 
zetsu_putihnya = list(map(int, input().split())) 
for i in range(aula_zetsu_putih): 
    print(zetsu_putihnya[i]*(i+1),end="")