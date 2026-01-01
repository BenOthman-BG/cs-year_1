

import java.util.Scanner;

public class Ex1 {

    public static void main(String[] args) {
        
        System.out.println("Bonjour , Se Programme va calculer la somme de 1 jusqu'a n : ");

        Scanner reader = new Scanner(System.in);
        int n , i , S ;

        System.out.println("entrer le nomber n :");
        n = reader.nextInt();

        S = 0 ;

        for(i= 1 ; i<=n ; i++){
            S = S + i ;
        }

        System.out.println("La somme est : " + S );

    }
    
}
