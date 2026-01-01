import java.util.Scanner;

public class EX8 {

    public static void main(String[] args) {
        System.out.println("Bonjoure ");
        Scanner reader = new Scanner(System.in);
        String X ;
        System.out.println(" entrer une chaine de caracter : ");
        X = reader.nextLine();

        char charArray[] = X.toCharArray();

        for(char c : charArray){
            System.out.println(c + " ");
        }

        System.out.println();


        


    }
    
}
