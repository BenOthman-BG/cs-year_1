
while True :
    print("menu : ")
    print("1 . entrer note ")
    print("2 . Quiter ")
    choix = input(" votre choix : ")
    match choix :
        case "1" : 
            A = float(input("entrer un nomber entre 0 et 20 : "))
            match A :
                case n if 0<= n < 10 :
                    print("redouble")
                case n if 10 <= n < 12 :
                    print("passable")
                case n if 12 <= n < 14 :
                    print("assez bien")
                case n if 14 <= n < 16 :
                    print("bien")
                case n if 16<= n <= 20 :
                    print("tres bien")
                case default :
                    print(" syntax erreur ")
        case "2":
            break        
    
        
    
        







