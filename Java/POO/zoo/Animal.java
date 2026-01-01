package zoo;

abstract public class Animal {
    private String nom ;
    private int age ;
    private String espece ;//type

    public Animal (String nom , int age , String espece ){
        this.nom = nom ;
        this.age = age ;
        this.espece = espece ;
    }

    public String getNom (){
        return nom ;
    }
    public void setNom (String nom){
        this.nom = nom ;
    }

    public String getEspece (){
        return espece;
    }
    public void setEspece (String espece){
        this.espece = espece ;
    }

    public int getAge (){
        return age ;
    }
    public void setAge (int age){
        this.age = age ;
    }


    abstract public String toString ();
    abstract public void crier ();

}
