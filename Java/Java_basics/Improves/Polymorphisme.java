package Amilieurer;

// classe salarier

import java.util.ArrayList;

abstract class Salarier {
    private String nom ;
    private double salaire ;

    //constracture

    public Salarier (String nom){
        this.nom = nom ;
    }

    //getters and setters

    public String getNom(){
        return nom ;
    }
    public void setNom(String nom){
        this.nom = nom ;
    }
    public double getSalaire(){
        return salaire;
    }
    public void setSalaire(double salaire){
        this.salaire = salaire;
    }

    // Methods


    @Override
    public String toString() {
        return nom ;
    }

    public void affichier_salaire(){
        System.out.println("Salaire : "+getSalaire()+" de "+this);
    }

}// fin classe Salarier

class Directeure extends Salarier {
    public Directeure(String nom) {
        super(nom);
        setSalaire(34000);
    }

    @Override
    public void affichier_salaire() {
        System.out.println("Salaire de Directeure : "+this+ " est " + getSalaire());
    }
}//fin de class directure

    class Chef extends Salarier {
        public Chef(String nom) {
            super(nom);
            setSalaire(12000);
        }

        @Override
        public void affichier_salaire() {
            System.out.println("Salaire de Chef : "+this+ " est "+ getSalaire());
        }
    }//fin de class chef

     class Ouvrier extends Salarier {
            public Ouvrier(String nom) {
                super(nom);
                setSalaire(7000);
            }


            @Override
            public void affichier_salaire() {
                System.out.println("Salaire de Ouvrier : "+this+ " est " + getSalaire());
            }
     }//fin de class ouvrier

public class Polymorphisme {
    public static void main(String[] args) {
        Salarier Directeure = new Directeure("othman");

        ArrayList<Salarier> khdama = new ArrayList<>();
        khdama.add(new Directeure("Othman"));
        khdama.add(new Chef("Hamza"));
        khdama.add(new Ouvrier("Benyaya"));
        khdama.add(new Directeure("King"));

        for (Salarier salarier:khdama){
            salarier.affichier_salaire();
        }
    }
}



