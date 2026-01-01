import java.util.Scanner;

public class Tp {

    public static void main(String[] args) {
        System.out.println("bonjour othman are the best player in the world");

         try(Scanner reader = new Scanner(System.in)){

            int age ;
            String name ; 
            int anne ;

        System.out.println("enter your name");

        name = reader.nextLine();

        System.out.println("enter your age ");
        age = reader.nextInt();


        System.out.println("enter your anne d'inscreption dans your anner");
        anne = reader.nextInt();


        System.out.println("hello " + name + "you are " + age + " and your " + anne);



         }
    }  
}
