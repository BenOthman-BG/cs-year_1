print(" bonjour ce programme va de trouver l'exestance d'un nomber ")
print(" entrer les nomber quit tu veux de lister : ")

T = []

for i in range(1,10):
    B =int(input(f" T [{i}] = "))
    T.append(B)

A = int(input(" entrer le nombre tester : "))

occ = T.count(A)

print('le nomber de ',A,' dans la list est : ',occ)