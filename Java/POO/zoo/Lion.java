package zoo;

public class Lion extends Animal implements Soignable {
    private String sexe ;
    private String region ; // african lion
    private int ID_lion ;

    public Lion (String sexe , int ID_lion , String region , String nom , int age , String espece){
        super(nom , age , espece);
        this.sexe = sexe;
        this.region = region;
        this.ID_lion = ID_lion;
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
    public void  setRegion(String region ){
        this.region = region;
    }

    public int getID_lion(){
        return ID_lion;
    }
    public void  setID_lion( int ID_lion){
        this.ID_lion = ID_lion;
    }

    @Override

    public String toString(){
        return  getNom()+","+getID_lion()+","+getAge()+","+getEspece()+","+getSexe()+ ","+getRegion() ;
    }

    public void crier (){
        System.out.println(" ,   Roaaaaaar !");
    }

    public void soigner(){
        System.out.println(" ,   The Lion take Bige medicine (Lion medicine )");
    }



}
