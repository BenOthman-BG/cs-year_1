Solidaire = [1 , "othman" , True , False ,["benyahya" , 10]]

Solidaire[0] = "HAHAH"

print(Solidaire[4])
print(Solidaire)
print(Solidaire[1:3])
print(Solidaire[1:])

#ljoza 2 

Othman = [1 , "othman" ,2 , 5 , True]
Benyhaya = [ 2 , "haha" ,6 , 8]

print(Othman , Benyhaya)

Othman += Benyhaya

print(Othman)

Othman.append(False)
print(Othman)

Othman.insert(0 , "hahaha")
print(Othman)

Othman.remove("hahaha")
print(Othman)

Othman.pop()
print(Othman)

Othman.pop()
print(Othman)

Othman.clear()
print(Othman)