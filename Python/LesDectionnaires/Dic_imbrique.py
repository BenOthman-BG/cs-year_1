#le dictionnaire inmbrique 

cmd = {}

taille = int(input("entrer le nombre des client : "))

for i in range (taille):
    nom = input("le nom : ").strip().lower()
    #cmd[nom] = nom
    cmd[nom] = {}
    produit = input ("nom de produit : ")
    qte = int (input(" la quantiter : "))
    prix = float(input (" prix unitaire :")) 
    cmd[nom]['c1'] = {
        'produit' : produit,
        'qte' : qte,
        'prix': prix
    }

print(cmd)

affichier = input("choiser le nom du client ")

if affichier in cmd :
    infos = cmd[affichier]['c1']
    print(f"\nclient : {affichier.capitalize()}")
    print(f"produit : {infos['produit']}")
    print(f"qte : {infos['qte']}")
    print(f"prix : {infos['prix']} MAD")
else:
    print("client non trouver !")
   
print("le montant de chaque client est : ")

list_montant = []

for nom , infos in cmd.items():
    prix = infos['c1'].get('prix')
    qte = infos['c1'].get('qte')
    montant = prix * qte 
    list_montant.append((nom.capitalize() , montant))

for nom , montant in list_montant:
    print(f"\n {nom} : {montant} MAD")


NouV = input("entrer le nom de client qui tu veux ajoute la un nouveux commande :").strip().lower()
produit = input(" Produit : ")
qte = int(input("qte : "))
prix = float(input("prix : "))


if NouV in cmd :
    cmd[NouV].update({'c2' : {
    'produit' : produit,
    'qte' : qte,
    'prix' : prix
    }})
    print(cmd)
else:
    print("client non trouvable : ")




