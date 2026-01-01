import java.util.Scanner;

public class Arrays {

    public static void main(String[] args) {
        int[] mynambers = { 10, 20 , 30 , 40 , 50 };

        mynambers[0] = 9 ;

        for(int i = 0 ; i< mynambers.length;i++){
            System.out.println(mynambers[i]);
        }

        int[] T  = new int[10];

        try (Scanner othman = new Scanner(System.in)) {
            System.out.println("entrer les 10 nombre");

            for(int pl = 0 ; pl < T.length ; pl++){
     System.out.println("enter number " + (pl +1));
     T[pl] = othman.nextInt();
            }
        }
        
    }
    
}

