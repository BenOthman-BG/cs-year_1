package File_tp;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Scanner;

public class CopierUnFichier {
    public static void main(String[] args) {

        try {
            File fichier = new File("fichier.txt");
            File f = new File("Othman.txt");
            Scanner reader = new Scanner(fichier);
            FileWriter fw = new FileWriter(f, true);
            PrintWriter pw = new PrintWriter(fw);

            while (reader.hasNextLine()){
                String text = reader.nextLine();
                pw.println(text);

            }
            pw.close();
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
