import java.util.Scanner;

public class Weeks {

    public static void main(String[] args) {


        String[] days = { "Monday" , "thusday" , "wedensday" ,"thursday" ,"friday" , "saturday" , "sunday"};
        
        System.out.println("veuillez entrer un nomer entre 1 et 7 : ");

        try (Scanner reader = new Scanner(System.in)) {

            int A ;

            System.out.println("entrer le nombre : ");
            A = reader.nextInt();

            System.out.println("le jour est : " +days[A-1]);

        }
    }    
}
