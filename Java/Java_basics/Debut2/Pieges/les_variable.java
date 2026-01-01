package Pieges;

public class les_variable {
    public static void main(String[] args) {
        //casting char -> int
        char c = 'a';
        int a = c ;
        System.out.println(a);
        //casting char -> int
        int number = 66 ;
        char letter = (char) number ;
        System.out.println(letter);
        //teorem petit -> plus  3adi
        //plus -> petit -> casting

        // int -> long
        int pet = 9 ;
        long plu = pet ;
        System.out.println(plu);
        // long -> int -> casting
        long plus = 9 ;
        int petit = (int) plus ;
        System.out.println(petit);

        // int -> float
        int aa = 8 ;
        float ff = aa / 7 ;
        System.out.println(ff);

        // float -> int  -> casting
        float fff = 4.5f;
        int aaa = (int) fff + 9 ;
        System.out.println(aaa);
        // byte to short -> casting

    }
}
