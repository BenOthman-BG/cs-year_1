import java.util.Scanner;

public class tafa3ol {

    public static void main(String[] args) {

        try (Scanner reader = new Scanner(System.in)) {
            String name ;
            byte age ;
            int i ;
            
            
            System.out.println("enter your name");
            name = reader.nextLine();


            System.out.println("enter your age");
            age = reader.nextByte();

            while (age < 0 || age > 100) {

                System.out.println("enter your age");
                age = reader.nextByte();

            }

            if ( age == 0 ){
                System.out.println("your age is invilide !!");
            }
            else{


            System.out.println("Hello " + name + "your age is : " + age );
            }

            int S = 0 ;

            for(i=1 ; i <= age ; i++){
              S = S + i ;
            }

            System.out.println("la somme est : " + S);
        }


    }
    
}
