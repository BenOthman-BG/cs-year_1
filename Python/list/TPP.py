print(" Bonjour ce programme va de manager une gestion d'etudiant : ")

A = int(input(" Entrer le nomber des etudiant : "))
print(f"votre nombre est : {A}")
print(" Les matier sont : \n PC \n Algorithme \n Maths \n AI \n cyber")

notes = []
nom = []
for i in range (A):
    list = []
    Nom = input("Nom : ")
    nom.append(Nom)
    PC_note = float(input(" PC note : "))
    list.append(PC_note)
    Algorithme_note = float(input(" Algorithme note : "))
    list.append(Algorithme_note)
    Maths_note = float(input(" Maths note : "))
    list.append(Maths_note)
    AI_note = float(input(" Ai note : "))
    list.append(AI_note)
    Cyber_note = float(input(" Cyber note : "))
    list.append(Cyber_note)
    notes.append(list)

print(f"les {A} estudiant et leur notes : ")

for i in range (len(nom)):
    print("\n")
    print(f"{nom[i]} : {",".join(str(notes[i][j]) for j in range (5))}")
    print("\n")
    print(f"Pc : {notes[i][0]}")
    print(f"Algorithme : {notes[i][1]}")
    print(f"Maths : {notes[i][2]}")
    print(f"AI : {notes[i][3]}")
    print(f"Cyber : {notes[i][4]}")
    print("\n")
Moyenne = []
for n in range (len(notes)):
    x = sum(notes[n]) / len(notes[n])
    Moyenne.append(x)


for i in range(len(nom)):
    print(f"{nom[i]} : {Moyenne[i]}")

min_ = min(Moyenne)
max_ = max(Moyenne)
index_max = Moyenne.index(max_)
index_min= Moyenne.index(min_)

print(f"first note : {nom[index_max]} : {max_}")
print(f"last note : {nom[index_min]} : {min_}")

nom_ = nom[index_min]
nom.remove(nom_)
Moyenne.remove(min_)

nom_notes = []
for i in range(len(nom)):
    list = []
    list.append(nom[i])
    list.append(Moyenne[i])
    nom_notes.append(list)

Moyenne.sort(reverse=True)

nom.clear()

for j in range(len(nom_notes)):
    for i in range (len(nom_notes)):
      if(nom_notes[i][1] == Moyenne[j]):
        nom.append(nom_notes[i][0])


print(" Order : ")
for i in range(len(nom)):
    print(f"{nom[i]} : {Moyenne[i]} : order {i+1} ")




