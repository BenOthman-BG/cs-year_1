A = int(input("entrer le nomber A : "))
B = int (input("entrer lenomber B : "))

if(A > B ):
    Quotion = A // B 
    rest = A % B 
    print("le quotion de A / B est : ",Quotion)
    print("le rest de A / B est : ",rest)
else:
    Quotion = B // A
    rest = B % A
    print("le quotion de B / A est : ",Quotion)
    print("le rest de B / A est : ",rest)

