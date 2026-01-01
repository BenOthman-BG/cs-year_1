
import java.util.Scanner;

public class EX6 {
    
    public static void main(String[] args) {
        
        System.out.println("Bonjour , se programme va clalculer la somme de 1 jusqu'a n : ");

        Scanner reader = new Scanner(System.in);
        int S , n ,x ;

        System.out.println("Veuillez entrer le nomber n : ");
        n = reader.nextInt();

        S = 0 ;
        x = 1 ;

        do{

            S = S + x ;

            x++;


        }while(x <= n );

        System.out.println("La somme est : "+ S);
    }
}
