package File_tp;

import java.io.File;
import java.util.Scanner;

public class cherche_lettre {
    public static void main(String[] args) {
        try {
            File file = new File("Othman.txt");
            Scanner reader = new Scanner(file);
            int compteur = 0;
            while (reader.hasNext()) {
                String mot = reader.next();
                for (int i = 0; i < mot.length(); i++) {
                    char lettre = mot.charAt(i);
                    if (lettre == 'e') {
                        compteur++;
                    }
                }
            }
            System.out.println("le nombre de lettre e est : "+compteur);
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
