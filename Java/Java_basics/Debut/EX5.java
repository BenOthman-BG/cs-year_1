import java.util.Scanner;

public class EX5 {

    public static void main(String[] args) {
        
        System.out.println("Bonjour , Se Programme va calculer la somme de 1 jusqu'a n : ");

        Scanner reader = new Scanner(System.in);

        int S , n  , x ;

        System.out.println("veuillez saisir le nomber n ");
        n = reader.nextInt();

        S = 0 ;
        x = 1 ;

        while (x <= n) {

            S = S + x ;

            x++ ;
            
        }

        System.out.println(" La somme est : " + S);
    }
    
}
