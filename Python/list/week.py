
week = ['monday' , 'tuesday' , 'wednesday' , 'thursday' , 'friday' ,'saturday', 'sunday']

print(" bonjour ce programme va dire est ce que notre magasin est ouver :")

A = input(" veuillez saisir le nom de jour de votre visite :")


testeure = None 
for i in range (len(week)-2):
 if( week[i].casefold() == A.casefold()):
  testeure = 1
  break
 elif( A.casefold() == "saturday" or A.casefold() =="sunday"):
  testeure = 0
 else:
  testeure = -1
 

if(testeure == 1):
 print("le magasin est ouver .")
elif(testeure == 0):
 print(" le magasin est fermer")
else:
 print(" syntax erreur ...")