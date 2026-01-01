import java.util.Scanner;

public class EX3 {

    public static void main(String[] args) {

        System.out.println("Bonjour , Ce programme va calculer la table d'une entier n jusaq'a 10 !! A condition la solution va inferieur 70 : ");

        Scanner reader = new Scanner(System.in);
        int  n , i;
        int S ;

        System.out.println("veuillez entrer le nomber n : ");
        n = reader.nextInt();

        
        for ( i = 1 ; i<= 10 ; i++){

            S = n * i ;
            if (S < 70){
                System.out.println(n +"*"+ i + " = " + S );
            }

        }
        
    }  
}
