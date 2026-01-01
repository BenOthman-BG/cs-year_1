import java.util.Scanner;

public class Tp2 {

    public static void main(String[] args) {
        
    

        Scanner reader = new Scanner(System.in);
        int A ;
        System.out.println("entrer un nomber : ");
        A = reader.nextInt();

        if(A > 97){
            System.out.println("A+");
        }else if (A >= 93 && A <= 96){
            System.out.println("A");
        }else if ( A  >= 93 && A <=96){
            System.out.println("A-");
        }else if ( A >= 90 && A<=92){
            System.out.println("B+");
        }else if ( A >= 87 &&  A <=89){
            System.out.println("B");
        }else if( A >= 83 && A <= 86){
            System.out.println("B-");
        }else if ( A >= 80 && A <= 82){
            System.out.println("C+");
        }else if ( A >= 77 && A <= 79){
            System.out.println("C");
        }else if ( A >= 70 && A <= 72 ){
            System.out.println("C-");
        } else if (A >= 67 && A <= 69) {
            System.out.println("D+");
        } else if (A >= 63 && A <=66) {
            System.out.println("D");
        } else if (A >= 60 && A <= 62) {
            System.out.println("D-");
        }

        
    
}
}
