package Bibliotheque;

import java.io.File;
import java.io.IOException;

public class f_main {
    public static void main(String[] args) {
        File f1 = new File("livres.txt");
        File f2 = new File("personnes.txt");

        try{
            if(f1.createNewFile()){
                System.out.println("file created ");
            }else {
                System.out.println("file already exist ");
            }
        }catch (IOException e){
            e.printStackTrace();
        }

        try{
            if(f2.createNewFile()){
                System.out.println("file created ");
            }else {
                System.out.println("file already exist ");
            }
        }catch (IOException e){
            e.printStackTrace();
        }

        lecteur lecteur1 = new lecteur("othman" , 16 , 1);
        lecteur lecteur2 = new lecteur("Hamza" , 18 , 2 );
        employe employe1 = new employe("Ali" , 14 , 99);
        employe employe2 = new employe("Anas" ,17,88);
        Robot robot1 = new Robot();

        bib biblio = new bib();
        System.out.println(" les information ancienne de fichier livres :");
        biblio.chargerlivre();
        System.out.println("les information ancienne de fichier personne : ");
        biblio.chargerpersonne();
        biblio.ajouter_personne(lecteur1);
        biblio.ajouter_personne(lecteur2);
        biblio.ajouter_personne(employe1);
        biblio.ajouter_personne(employe2);
        biblio.ajouter_personne(robot1);
        biblio.sauvegarderlivre();
        biblio.sauvegarderpersonne();
        System.out.println(" les neveau information de fichier livres :");
        biblio.chargerlivre();
        System.out.println("les neveau information de fichier personne : ");
        biblio.chargerpersonne();

        Gui gui_class = new Gui();
    }



}
