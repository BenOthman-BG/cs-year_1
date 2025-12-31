info = {}
info['nom'] = input("entrer votre nom : ")
info['prenom'] = input("entrer votre prenom : ")
info['age'] = int(input("entrer votre age : "))

print(" votre info : ")
print(info)
print(info.items())
print(info.keys())
print(info.values())

info['nom'] = 'Hamza'
print(info.items())
print(info.get('agee'))
print(info.get('nom' , 'inconnu'))
