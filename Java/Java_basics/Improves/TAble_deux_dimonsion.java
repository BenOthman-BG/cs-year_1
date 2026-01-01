// exercice de comprehnsion la notion de tableau de deux demonsion :


package Amilieurer;

import java.util.Scanner;

public class TAble_deux_dimonsion {
    public static void main(String[] args) {

        Scanner reader = new Scanner(System.in);
        int i;
        // le just qui deffferant
        int[][] Table1 = new int[3][4];
        //remplire le tableau
        for (i = 0; i < Table1.length; i++) {
            for (int j = 0; j < Table1[i].length; j++) {
                Table1[i][j] = reader.nextInt();
            }
        }
        //affichier le tableau
        for(i = 0 ; i< Table1.length ; i++){
            for (int j = 0 ; j< Table1[i].length ;j++ ){
                System.out.print(" "+Table1[i][j]);
            }
            System.out.println(" ");
        }

    }
}
