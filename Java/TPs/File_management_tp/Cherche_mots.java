package File_tp;

import java.io.File;
import java.util.Scanner;

public class Cherche_mots {
    public static void main(String[] args) {
        try {
            File file = new File("Othman.txt");
            Scanner reader = new Scanner(file);
            int compteur = 0;
            while (reader.hasNext()) {
                String mots = reader.next();
                if (mots.equals("best")) {
                    compteur++;
                }
            }
            System.out.println("le nombre de mots best est : "+compteur+" fois");
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
