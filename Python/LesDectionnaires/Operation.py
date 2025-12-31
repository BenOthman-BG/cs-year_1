# les operation = , != , =| 

othman = {
    'nom' : 'othman',
    'prenom' : 'benyahya',
    'age' : 18
}

Hamza = {
    'nom' : 'Hamza',
    'prenom' : 'benyahya',
    'age' : 15
}

if(othman == Hamza):
    print("les info sont egaux")
else:
    print("les info ne sont pas egaux")


# l'operation =| si les deux dic ont le meme cle la valeur va ecrasi de 2 vers le 1 

dic_1 = {
    'nom' : 'othman',
    'prenom' : 'benyahya',
    'age' : 18
}

dic_2 = {
    'nom' : 'Hamza',
    'prenom' : 'benyahya',
    'filier' : 'GI'
}

dic_1 |= dic_2 

print(dic_1)# dic_1 = {'nom': 'Hamza', 'prenom': 'benyahya', 'age': 18, 'filier': 'GI'}