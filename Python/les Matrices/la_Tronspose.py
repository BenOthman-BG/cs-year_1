print(" Bonjour ce programme va de lire une matrice et calculer ca tronsposer :")
C = []
for i in range(0,4):
    L = []
    for j in range(0,6):
        A = int(input(f"A[{i},{j}] = "))
        L.append(A)
    C.append(L)

print(C)

print("Apre le tronsposer : ")

T = []

for i in range(0,6):
    L = []
    for j in range(0,4):
        L.append(C[j][i])
    T.append(L)

print(T)