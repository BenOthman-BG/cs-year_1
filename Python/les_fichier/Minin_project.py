import os ## os est une biblioteque operating system 

#create folder 
folder = "Notes"
os.makedirs(folder ,exist_ok=True)

#lister les notes 
def liste_notes():
    files = []
    for f in os.listdir(folder):
        if f.endswith('.txt'):
            files.append(f)
    if not files:
        print("le dossier est vide ")
    else:
        print("les notes : ")
        for f in files :
            print(f" - {f}")
#cree les notes 
def cree_notes ():
    name = input(" note name : ")+".txt"
    content = input(" the note : ")
    with open(os.path.join(folder , name) , 'w' ) as note :   
        note.write(content)   
    print("Saved...")

# lire les notes 
def lire_notes ():
    name = input(" note name : ")+".txt"
    path = os.path.join(folder ,name)
    if os.path.exists(path):
        with open(path , 'r') as note :
            print(" le contenu : ")
            print(note.read())
    else :
        print(" note non trouvable ...")

# modifies les notes 
def modifier_notes():
    name = input(" note name : ")+".txt"
    path = os.path.join(folder , name)
    if os.path.exists(path):
        content = input(" new note : ")
        with open(path , "w") as note :
            note.write(content)
            print(" modified")
    else:
        print(" can't find note")

#suprimer les notes
def suprimer_notes():
    name = input(" note name : ")+".txt"
    path = os.path.join(folder ,name)
    if os.path.exists(path) :
        os.remove(path)
        print(" deleted ")
    else :
        print(" can't find note ")

#fonction main 
def main ():
    while True:
        print("Menu : ")
        print("1. lister les notes ")
        print("2. cree les notes ")
        print("3. lire les notes ")
        print("4. modifier les notes ")
        print("5. suprimer les notes ")
        print("0. Quiter ")
        choix = input(" Votre choix : ")
        if choix == '1':
            liste_notes()
        elif choix == '2':
            cree_notes()
        elif choix == '3':
            lire_notes()
        elif choix == '4':
            modifier_notes()
        elif choix == '5':
            suprimer_notes()
        elif choix == '0':
            break
        else:
            print("incorect...")
        
# this is very important 

main()

