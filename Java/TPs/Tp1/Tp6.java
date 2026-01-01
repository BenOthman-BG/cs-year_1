import java.util.Scanner;

public class Tp6 {

    public static void main(String[] args) {

           Scanner reader = new Scanner(System.in);
        int A ;
        System.out.println("entrer un nomber entier entre 1 et 12 : ");

        A = reader.nextInt();

        if(A == 12 || A == 1 || A == 2 ){
            System.out.println("hiver");
        }
        if ( A == 3  || A == 4 || A == 5) {
            System.out.println("printemp");
        }
        if (A == 6 || A == 7 || A == 8) {
            System.out.println("ete");
        }
        if ( A == 9 || A == 10 || A == 11) {
            System.out.println("automme");
        }
       
    }
    
}
