# Affichier des case specifique d'une liste

arry = list(range(1,21))

# affichier arry reverse 
print(arry[::-1])

# array[debut : fin : pas ]

# EXP : affichier de 1 jusqu'a 10 

print(arry[0:10])#pas = 1
# print les nomber impaire 
print(arry[0::2])
#print les nomber paire 
print(arry[1::2])

arry *= 2

print(arry)


arry[11:30] = []

print(arry)

