package JAvaTpfile;

import java.io.File;
import java.util.Scanner;

public class Lire_fichier {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        System.out.println("entrer le nom de fichier : ");
        String N_fichier = reader.nextLine();
        File fichier = new File(N_fichier);
        try {
            Scanner readerB = new Scanner(fichier);
            while (readerB.hasNextLine()){
                String text = readerB.nextLine();
                System.out.println(text);
            }
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
