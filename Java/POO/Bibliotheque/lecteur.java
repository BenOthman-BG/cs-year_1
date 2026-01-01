package Bibliotheque;

 class lecteur extends personne implements parable {
     private int lecteurId ;

     public lecteur (String nom , int age  , int lecteurId){
         super(nom , age );
         this.lecteurId = lecteurId ;
     }


     @Override
     public String toString(){
         return  " Hello I am "+getNom()+" I am "+ getAge()+" And I comme for learning ";
     }

}
