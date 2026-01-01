package Banka;

abstract class Compte {
    private String nom ;
    private String prenom ;
    private String CNI ;
    private double solde ;

    public Compte(String nom , String prenom ,String CIN ,double solde ){
        this.nom = nom ;
        this.prenom = prenom;
        this.CNI =CIN;
        this.solde = solde;
    }

    public String getNom (){
        return nom;
    }
    public void setNom(String nom){
        this.nom = nom ;
    }
    //----------------------------------
    public String getPrenom(){
        return prenom;
    }
    public void setPrenom(String prenom){
        this.prenom = prenom ;
    }
    //-----------------------------------
    public String getCNI(){
        return CNI;
    }
    public void setCNI(String CNI){
        this.CNI = CNI;
    }
    //------------------------------------
    public double getSolde(){
        return solde;
    }
    public void setSolde(double solde){
        this.solde = solde;
    }

    //methods

    public void crediter (double montant){
        if(montant > 0 ){
            solde += montant;
            System.out.println(montant + " DH crédité. Nouveau solde: " + solde + " DH");
        }else{
            System.out.println("ERREUR... Montant invalide ...");
        }
    }

    //----------------

    public void debeter (double montant){
        if (montant > 0 && montant <= solde){
            solde -= montant ;
            System.out.println(montant + " DH debtete. Nouveau solde: " + solde + " DH");
        }else{
            System.out.println("ERREUR...Montant invalide...");
        }
    }


    public void afficher() {
        System.out.println("|CNI : " + CNI + "|Nom : " + nom + "|Prenom : "+prenom+"|solde : "+solde+"DH");
    }


}//Fin de classe compte
