import java.util.Scanner;

public class Tp4 {

    public static void main(String[] args) {

        Scanner reader = new Scanner(System.in);
        int A ;
        System.out.println("entrer un nomber entier : ");

        A = reader.nextInt();

        if(A %2 == 0 ){
            System.out.println("le nomber est paire");
        }
        else {
            System.out.println("le nomber est impaire");
        }

    }
    
}
