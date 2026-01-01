import java.util.Scanner;

public class EX2 {

    public static void main(String[] args) {
        
        System.out.println(" Bonjour , ce programme va calculer le factorial d'un nombre N :");
        Scanner reader = new  Scanner(System.in);
        int i , n , S ;

        System.out.println("Veuillez saisir un nomber n ");
        n = reader.nextInt();

        S = 1 ;

        for(i = 1 ; i <= n ; i++){
            S = S * i ;
        }

        System.out.println(" Le factoriel de "+n + " = "+S );
    }
    
}
