package zoo;

import java.io.File;
import java.io.IOException;
import java.sql.Statement;
import java.util.Scanner;

public class F_main {

    public static void main(String[] args) {

        //Open file

        File file_x = new File("ZOO.txt");

        try{
            if(file_x.createNewFile()){
                System.out.println(" File created ");
            }else {
                System.out.println(" File already exist . ");
            }
        }catch ( IOException e){
            e.printStackTrace();
        }



        System.out.println("Bonjour ce programme va de Manager un zoo .");



        do {
            Scanner read = new Scanner(System.in);
            int choix ;
            String nom ;
            int age ;
            String type ;
            String sexe ;
            int id ;
            String region ;
            The_ZOO mini_zoo = new The_ZOO();
            System.out.print("Menu : \n 1. Ajouter Animale \n 2.Afichier Animale \n 3. Afichier crie Animale " +
                    "\n 4.Supimer Animale \n 0.Quiter \n  Votre choix : ");
            choix =  read.nextInt();
            read.nextLine();
            switch (choix){
                case 1 :
                    System.out.println(" type (lion , oiseau ) : ");
                    type = read.nextLine();
                    System.out.println(" ID Animale : ");
                    id = read.nextInt();
                    read.nextLine();
                    System.out.println(" nom : ");
                    nom = read.nextLine();
                    System.out.println(" age : ");
                    age = read.nextInt();
                    read.nextLine();
                    System.out.println("sexe : ");
                    sexe = read.nextLine();
                    System.out.println(" region : ");
                    region = read.nextLine();

                    if(type.toLowerCase().equalsIgnoreCase("lion")){
                        Lion lion = new Lion(sexe , id , region , nom , age , type);
                        mini_zoo.Ajouter_Animale(lion);
                        mini_zoo.Sauvgarder_Animale();
                    }else {
                        Oiseau oiseau = new Oiseau(sexe , id , region , nom , age , type);
                        mini_zoo.Ajouter_Animale(oiseau);
                        mini_zoo.Sauvgarder_Animale();
                    }
                    break;


                case 2 :
                    mini_zoo.Affichier_info_Animale();
                    break;

                case 3 :
                    mini_zoo.Affichier_crie_Animale();
                    break;
                case 4 :
                    System.out.println(" type (lion , oiseau ) : ");
                    type = read.nextLine();
                    System.out.println(" ID Animale : ");
                    id = read.nextInt();
                    read.nextLine();
                    mini_zoo.supimer_Animale(id , type);
                    mini_zoo.Sauvgarder_version2_Animale();
                    break;
                case 5 :
                    return;
            }
        }while (true);
    }
}
