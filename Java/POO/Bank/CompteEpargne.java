package Banka;

class CompteEpargne extends Compte {
    private double tauxInteret ;

    public CompteEpargne(String nom , String prenom ,String CIN ,double solde ,double tauxInteret){
        super( nom ,prenom ,CIN ,solde);
        this.tauxInteret = tauxInteret;
    }

    public void appliquerInteret (){
        setSolde(getSolde() + getSolde() * tauxInteret);
        System.out.println("Interet appliquer ("+(tauxInteret*100)+ "% ,Nouveau solde : "+getSolde()+"DH");
    }
}
