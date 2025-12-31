emploiye = {
    "Othman" : 10000,
    "Youssef" : 7000,
    "Amine" : 12000,
    "Hamza" : 90000,
    "Ibrahime" : 3000,
}

Somme = sum(emploiye.values())
Max = max(emploiye.values())

print(Somme)
print(Max)

for emp , salaire in emploiye.items():
    if(salaire >= 9000):
     print(" - " ,salaire)