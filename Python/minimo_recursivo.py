# Retorna el minimo de una lista , usando recursividad
def minimo(lista):
    #Casos base
    if(len(lista) == 2):
        return lista[0] if lista[0] < lista[1] else lista[1]
    elif(len(lista) == 1):
        return lista[0]
    #Caso recursivo
    else:
        # Minimo entre el actual y el ultimo de la lista anterior
        return minimo(lista[:len(lista)-1]) if minimo(lista[:len(lista)-1]) < lista[len(lista)-1] else lista[len(lista)-1] 
             