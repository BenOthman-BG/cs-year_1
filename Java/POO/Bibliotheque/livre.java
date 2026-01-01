package Bibliotheque;

class livre {
    private String titre ;
    private String auteur ;
    private String disponible ;

    public livre (String titre , String auteur , String disponible){
        this.titre = titre ;
        this.auteur = auteur;
        this.disponible = disponible;
    }

    public String getTitre (){
        return titre;
    }
    public void setTitre(String titre){
      this.titre = titre ;
    }

    public String getAuteur (){
        return  auteur;
    }
    public void  setAuteur(String auteur){
        this.auteur = auteur;
    }

    public String getDisponible(){
        return  disponible;
    }
    public void  setDisponible (String disponible){
        this.disponible = disponible;
    }

    @Override
    public String toString(){
        return " titre : "+getTitre()+", Auteur : "+getAuteur()+", disponible : "+getDisponible();
    }

}
