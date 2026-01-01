// int float string .... ces sont des types primitive
//  Java est OOP donc tous ce qui en java se sont des object
// Mais les type int string float ... se sont des exeption
// Alors on trouve des classe de ces type
// int -> Integer...

package Amilieurer;

public class Enveloppeurs {

    public static void main(String[] args) {
      int a = 8 ;
      //Integer integer = new Integer(9);
        Integer b = 6 ;
        char c = 'O';
        //Character character = new Character('O');
        Character cc = '0';

        /*l'avantage de l'enveloppeur est ces type sont des classe alor il ya des methodes dans ce classe */
         String exemple = "99";

         b = Integer.parseInt(exemple);
    }
}
