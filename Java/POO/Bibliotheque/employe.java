package Bibliotheque;

 class employe extends personne implements parable {
     private  int  matricule ;

     public employe (String nom , int age , int matricule ){
         super(nom , age );
         this.matricule = matricule ;
     }

     @Override
     public String toString (){
         return  "Hello I am "+getNom()+ "I am "+getAge()+" And i comme for job ";
     }

}
