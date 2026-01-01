import java.util.Scanner;

public class EX7 {


    public static void main(String[] args) {

        
        System.out.println(" ce programme va calculer le PGCD de deux nombre : ");
        Scanner reader = new Scanner(System.in);
        int a, b, S;
        int x , y ;

        System.out.println(" entrer le nombre a : ");
        a = reader.nextInt();
        System.out.println(" entre le nomber B : ");
        b = reader.nextInt();
        S = PGCd(a, b);
        System.out.println("Le PGCD de " + a + " et " + b + "  =  " + S);

         x = a / S ;
         y = b / S ;

        System.out.println( a +" / "+ b + " = " + x + " / " + y  );

        
    }

    public static int PGCd(int x, int y) {
        int S;

        if (y == 0) {
            S = x ;
        } else {

            S = PGCd(y, x % y);
        }

        return S;
    }  
}
