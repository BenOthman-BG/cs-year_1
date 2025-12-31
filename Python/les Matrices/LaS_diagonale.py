

print(" Bonjour ce programme va de lire 1 matrice et calculer la somme de diagonale :")

print("Matrice A")

A = []
for i in range(0,4):
    L = []
    for j in range(0,4):
        x = int(input(f"A[{i},{j}] = "))
        L.append(x)
    A.append(L)

print(" A : ")
print(A)

print(" La some de diagonale est : ")

S = 0 

for i in range(0,4):
    for j in range(0,4):
        if(i == j):
            S = S + A[i][j]

print(S)