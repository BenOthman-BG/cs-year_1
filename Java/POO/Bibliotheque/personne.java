package Bibliotheque;

abstract public class personne {
    private String nom ;
    private int age ;

    public personne (String nom , int age ){
        this.nom = nom  ;
        this.age = age ;
    }

    public String getNom (){
        return nom ;
    }
    public void setNom(String nom ){
        this.nom = nom ;
    }
    public int getAge (){
        return  age ;
    }
    public  void setAge (int age ){
        this.age = age ;
    }
    abstract public String toString();
}
