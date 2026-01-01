import java.util.Scanner;

public class EX4 {
    

    public static void main(String[] args) {
        System.out.println("Bonjour , Ce programme va demonder a l'utilisateur  de saisir des nomber jusqu'a ce qui'il saisir un nomber negative :");

        Scanner reader = new Scanner(System.in);
        int n  , i , x  ;

        System.out.println("veuillez entre les nomber : ");


     x = 1 ;
     
     for ( i = 0  ; i < x ;  i++){

        n = reader.nextInt();
         if(n < 0){
            break;
         }
         x++ ;
     }

    

     /*do {

          n= reader.nextInt();


     }while(n>0);

    }*/
}}
