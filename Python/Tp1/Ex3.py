A = int(input("entrer le nombre A : "))
B = int(input("entrer le nomber B : "))
C = int(input("entrer le nomber C : "))

M =[A , B ,C ]

T = [ B , C , A ]

print("Votre valeurs avant l'echange : ")
print(M)
print("votre valeurs apres l'echange : ")
print(T)

tmp = A 
A = B 
B = C 
C = tmp 

print(A,B ,C)
