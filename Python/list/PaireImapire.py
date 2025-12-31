from sympy import isprime, primerange
print(" Bonjour ce programme va de donnes les nomber paire , impaire , premier , negatives , positive dans une list : ")

print(" remplire votre list ")

A = []
n = int(input(" entrer la taille de list : "))
for i in range(n):
 element = int(input(f"A[{i+1}] = "))
 A.append(element)

# paire , impaire 

paire = []
impaire = []
 
for i in range(n):
 if(A[i] % 2 == 0):
  paire.append(A[i])
 else:
  impaire.append(A[i])
 
print(" les nomber paire sont : ")
print(paire)
print("les nomber impaire sont :")
print(impaire)

# negatives , positives 

positive = []
negative = []

for i in range(n):
 if(A[i] >= 0):
  positive.append(A[i])
 else:
  negative.append(A[i])

print("les nomber positives sont : ")
print(positive)
print("les nomber negatives sont :")
print(negative)

premier = []

for i in range(n):
 if(isprime(A[i]) == True):
  premier.append(A[i])
 
print("les nomber premier sont : ")
print(premier)