print(" Bonjour ce programme va de lire 2 matrice et calculer la somme :")

print("Matrice A")

A = []
for i in range(0,4):
    L = []
    for j in range(0,6):
        x = int(input(f"A[{i},{j}] = "))
        L.append(x)
    A.append(L)

print("Matrice B")
B = []
for i in range(0,4):
    L = []
    for j in range(0,6):
        x = int(input(f"A[{i},{j}] = "))
        L.append(x)
    B.append(L)

print(" A : ")
print(A)
print (" B : ")
print(B)

print("A + B : ")

S = []

for i in range(0,4):
    L = []
    for j in range(0,6):
        N = A[i][j] + B[i][j]
        L.append(N)
    S.append(L)

print(S)