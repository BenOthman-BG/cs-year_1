package zoo;

public class Oiseau extends Animal {
    private String sexe ;
    private String region ; // african lion
    private int ID_oiseau ;

    public Oiseau (String sexe , int ID_oiseau , String region , String nom , int age , String espece){
        super(nom , age , espece);
        this.sexe = sexe;
        this.region = region;
        this.ID_oiseau = ID_oiseau;
    }

    public String getSexe (){
        return sexe;
    }
    public void  setSexe(){
        this.sexe = sexe;
    }

    public String getRegion(){
        return region;
    }
    public void  setRegion(){
        this.region = region;
    }

    public int getID_oiseau(){
        return ID_oiseau;
    }

    public void setID_oiseau(int ID_oiseau){
        this.ID_oiseau = ID_oiseau;
    }

    @Override

    public String toString(){
        return  getNom()+","+getID_oiseau()+","+getAge()+","+getEspece()+","+getSexe()+ ","+getRegion() ;
    }

    public void crier (){
        System.out.print(" ,   Fiew Fiew Fiew !");
    }

    public void soigner(){
        System.out.print(" ,   The oiseau take Bige medicine (oiseau medicine )");
    }

}
