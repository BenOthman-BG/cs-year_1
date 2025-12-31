print("Bonjour ce programme va de trouver est ce que deux list sont au mois ont un comun")
print("remplire les list s'il vous plait")
print(" list 1 :")

L1 = []

for i in range (0,6):
    A = int(input(f" L1[{i}] = "))
    L1.append(A)

L2 =[]

print(" list 2")
for i in range (0,6):
    B = int(input(f" L2[{i}] = "))
    L2.append(B)

exist = False

for i in range (0,6):
    for j in range (0,6):
        if(L1[j] == L2[i]):
            exist = True

if(exist):
    print(" ouiiiii")
else:
    print(" NOOOOOoo ")
