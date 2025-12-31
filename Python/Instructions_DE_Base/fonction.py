# fonction qui permet de calculer le cube d'un nomber entier 

def cube (a ):
    s = a*a*a 
    return s 

print("Bonjour ce programme va calculer le cube d'un nomber reel : ")
a = int(input(" Entrer un nomber reel : "))
S = cube(a)
print("le cube de ",a," est : ",S)
