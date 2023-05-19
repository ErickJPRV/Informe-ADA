
def countingSort(lista):
    output = [0] * len(lista)
    count = [0] * 100
    for i in range(0, len(lista)):
        count[lista[i]] += 1
    for i in range(1, 100):
        count[i] += count[i - 1]
    i = len(lista) - 1
    while i >= 0:
        output[count[lista[i]] - 1] = lista[i]
        count[lista[i]] -= 1
        i -= 1
    for i in range(0, len(lista)):
        lista[i] = output[i]
    return lista




