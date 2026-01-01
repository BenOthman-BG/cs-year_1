package File_tp;

import java.awt.desktop.SystemEventListener;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.SQLOutput;
import java.util.Scanner;

public class Fichier {
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        System.out.println("entrer le nom de fichier : ");
        String fichier = reader.nextLine();
        System.out.println("entrer le contenue de fichier : ");
        String message = reader.nextLine();
        System.out.println("Ajout/true , Ecraser/false");
        Boolean ajout = reader.nextBoolean();

        ecrireFichier(fichier,message,ajout);

    }

    public static void ecrireFichier(String fichier , String message , boolean ajout){
        File f = new File(fichier);

        try(  FileWriter fw = new FileWriter(fichier, ajout);
              PrintWriter pw = new PrintWriter(fw);
              ) {
            pw.println(message);
           // pw.close(); dosen't matter now
        }catch (IOException e){
            e.printStackTrace();
        }
    }
}
