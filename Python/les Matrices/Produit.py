# nomber des colone de A = nomber des ligne de B 

print(" Bonjour ce programme va de lire 2 matrice et calculer le produit :")

print("Matrice A")

A = []
for i in range(0,2):
    L = []
    for j in range(0,3):
        x = int(input(f"A[{i},{j}] = "))
        L.append(x)
    A.append(L)

print("Matrice B")
B = []
for i in range(0,3):
    L = []
    for j in range(0,3):
        x = int(input(f"A[{i},{j}] = "))
        L.append(x)
    B.append(L)

print(" A : ")
print(A)
print (" B : ")
print(B)

P = []

print(" A * B ")

for i in range(0,3):
    L = []
    for j in range(0,2):
        S = 0
        for n in range(0,3):
            S = S + B[n][i] * A[j][n]
        L.append(S)
    P.append(L)

print(P)