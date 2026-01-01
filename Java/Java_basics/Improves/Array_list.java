// exercice de comprehnsion de notion array list
// - Array list est un tableau Mais dynamiquie


package Amilieurer;

import java.util.ArrayList;

public class Array_list {
    public static void main(String[] args) {
        ArrayList<String> table  = new ArrayList<>();
        table.add ("othman");
        table.add ("Hamza");
        table.add("Maryemme");

        System.out.println(table);
        table.remove(1 );
        System.out.println(table);
        System.out.println(table.size());
    }
}
