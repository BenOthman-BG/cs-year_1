import os
import json
#1. cree folder_produit 
folder = "etudiant"
os.makedirs(folder , exist_ok=True)

def cree_etudiant ():
    nbr_etudiant = int(input(" Entrer le nomber des etudiant : "))

    
    for i in range(nbr_etudiant):
       dic = {}
       nom = input("nom : ")
       age = int(input(" Age : "))
       print(" notes : ")
       list_ = []
       for j in range(4):
            note = int(input(f"note {j+1} : "))
            list_.append(note)
       dic[nom] = {"age" : age , "notes" : list_}
       
       path = os.path.join(folder , nom+".txt")
       with open(path , "w") as f :
          f.write(json.dumps(dic ,indent=4))

cree_etudiant()

def lister_etudiant():
    list_ = []
    for f in os.listdir(folder):
        if f.endswith(".txt"):
            list_.append(f)
    
    if not list_ :
        print("Vide ...")
    else:
        print(" les etudiant : ")
        for i in range(len(list_)):
            print(f"number {i+1}  : {list_[i]}")

lister_etudiant()

def chercher_etudiant():
    nom = input(" nom : ")+".txt"
    path = os.path.join(folder , nom)
    if os.path.exists(path):
        print("est trouvable")
        with open(path , "r") as f :
            print(f.read())
    else :
        print("non trouvable ...")


chercher_etudiant()

def supimer_fichier():
    nom = input ("nom : ")+".txt"
    path = os.path.join(folder , nom)
    if os.path.exists(path):
        os.remove(path)
        print("deleted ... ")
    else:
        print("non trouvable ...")