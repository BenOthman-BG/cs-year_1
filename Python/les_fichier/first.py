# cree fichier 
# ecrire fichier 
# lire fichier 

A = input("choiser le nom de fichier.html : ")
open_file = open(A , 'a')
B = input("ecrire dans le fichier : ")
open_file.write("\n")
open_file.write(B)
open_file.close()
print(" le contenu de fichier : ")
open_file = open(A ,'r')
print(open_file.read())
open_file.close()
