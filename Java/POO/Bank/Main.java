package Banka;

import org.w3c.dom.ls.LSOutput;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);

        System.out.println("Entrer votre nom : ");
        String nom = reader.nextLine();
        System.out.println("Entrer votre prenom : ");
        String prenom = reader.nextLine();
        System.out.println("Entrer votre CNI : ");
        String CNI = reader.nextLine();

        System.out.println("Type de votre conte (epargne/courant) : ");
        String typeCompte = reader.nextLine().trim().toLowerCase();

        Compte compte ;

        if(typeCompte.equals("epargne")){
            compte = new CompteEpargne(nom ,prenom ,CNI ,0.0 ,0.02);
        }else if(typeCompte.equals("courant")){
            compte = new CompteCourant(nom ,prenom,CNI ,0.0 , 500);
        }else{
            System.out.println("ERREUR...type de compe invalide ....");
            return;
        }

        compte.afficher();

    }
}
