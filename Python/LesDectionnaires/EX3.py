Tel = {
    "Othman" : "123390527",
    "Youssef" : "899898932",
    "Hamza" : "837374037038",
    "Ali" : "948759489758",
    "TT" : "4985984985948",
}

print(Tel["TT"])

compteure = 0 

for nom , telephone in Tel.items():
    if(nom == "Ali"):
        compteure = 1

if(compteure):
    print("est trouve")
else:
    print(" pas de trouve")
