print("Bonjour ce programme va de manager gestion etudiant . ")
nbr_etudiant = int(input(" Entrer le nomber des etudiant : "))

dic = {}
for i in range(nbr_etudiant):
    nom = input("nom : ")
    age = int(input(" Age : "))
    print(" notes : ")
    list_ = []
    for j in range(4):
        note = int(input(f"note {j+1} : "))
        list_.append(note)
    dic[nom] = {"age" : age , "notes" : list_}

print(dic)


M_dic = {}

for nom , infos in dic.items():
    notes = infos["notes"]
    moyenne = sum(notes) / len(notes)
    M_dic[nom] = {"Moyenne" : moyenne}

print(M_dic)

max_ = max(m["Moyenne"] for m in M_dic.values())
min_ = min(m["Moyenne"] for m in M_dic.values())

for nom , note in M_dic.items():
    infos = note["Moyenne"]
    if(infos == max_):
        print(f"first : {nom} : {note}")
    if(infos == min_):
        print(f"last : {nom} : {note}")


N_nom = input(" entrer le nom de etudiant qui tue veux de changer l'age : ")

test = 0
for nom , infos in dic.items():
    if(nom == N_nom):
        Neavou_age = int(input(" Neavou age : "))
        infos["age"] = Neavou_age
        print(dic)
        test = 1
        break

if(test == 0):
    print("Non trouvable")

test = 0 

N_nom = input(" entrer le nom de etudiant qui tue veux suprimer : ")

for nom in dic:##tal rda 
    if(nom == N_nom):
        del dic[nom]
        print(dic)
        test = 1
        break
        

if(test == 0):
    print("Non trouvable")


Copy_dic = dic.copy()

dic.clear()