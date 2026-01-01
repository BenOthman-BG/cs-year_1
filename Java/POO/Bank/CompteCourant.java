package Banka;

 class CompteCourant extends Compte {
     private double decouvert ;

     //Constructer

     public CompteCourant (String nom , String prenom ,String CIN ,double solde ,double decouvert){
         super(nom , prenom ,CIN ,solde);
         this.decouvert = decouvert;
     }

     @Override

     public void debeter(double montant){
         if(montant > 0 && montant <= getSolde()+montant){
             setSolde(getSolde() - montant);
             System.out.println(montant +" DH debite , Nouveau solde : "+getSolde()+" DH");
         }else {
             System.out.println("ERREUR...Montant invalide ...");
         }
     }
}//fin de class CompteCourant
