import java.util.Scanner;

public class Max {
    public static void main(String[] args) {

        System.out.println("veuillez entrer deux nomber : ");

        Scanner reader = new Scanner(System.in);
            int A ;
            int B ;

        

            System.out.println("entrer nomber A :");
            A = reader.nextInt();

            System.out.println("entrer nomber B : ");
            B = reader.nextInt();

            if(A>B){
                System.out.println("Le max est : " + A);
            }else{
                System.out.println("Le max est : " + B);
            }
         
reader.close();
    }
}
