package Bibliotheque;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class bib {


    ArrayList<livre> livres = new ArrayList<>();


    public void ajouter_livre (livre livre1){
        livres.add (livre1);
    }

    public void sauvegarderlivre(){


        try(FileWriter f_livre = new FileWriter("livres.txt" , true);
            PrintWriter p_livre = new PrintWriter(f_livre);
            ){
            for(livre livree:livres){
                p_livre.println(livree);
            }

        }catch (IOException e){
            e.printStackTrace();
        }
    }

    ArrayList<parable> personnes = new ArrayList<>();

    public void ajouter_personne (parable personne1){
        personnes.add (personne1);
    }

    public void sauvegarderpersonne(){


        try(FileWriter f_personne = new FileWriter("personnes.txt" , true);
            PrintWriter p_personne = new PrintWriter(f_personne);
        ){
            for(parable persone:personnes){
                p_personne.println(persone);
            }

        }catch (IOException e){
            e.printStackTrace();
        }
    }

    public void chargerlivre (){
        File f1 = new File("livres.txt");
        try(Scanner livre_read = new Scanner(f1);){
            while (livre_read.hasNextLine()){
                System.out.println(livre_read.nextLine());
            }
        }catch (IOException e){
            e.printStackTrace();
        }
    }

    public void chargerpersonne (){
        File f2 = new File("personnes.txt");
        try(Scanner personne_read = new Scanner(f2);){
            while (personne_read.hasNextLine()){
                System.out.println(personne_read.nextLine());
            }
        }catch (IOException e){
            e.printStackTrace();
        }
    }

}
