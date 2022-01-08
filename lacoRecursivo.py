def laco(lista,total,p=1, i=0):
    if i >= total:
        pass
    else:
        lista.append(i)
        laco(lista,total,p,i+p)
        return lista

"O algoritmo precisa recebar a lista a qual voce deseja intera sobre ela e a quantidade de itens que voce deseja preencher, e os passos caso queira"

lista = list()
laco(lista,13)
print(lista)

"Caso não defina os passos que o algoritmo deva seguir, o algoritmo toma como padrão avança de 1 em 1"