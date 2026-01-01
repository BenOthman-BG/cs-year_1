package zoo;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class The_ZOO {

    ArrayList<Animal> Animales = new ArrayList<>();
    ArrayList<Animal> Animales_supp = new ArrayList<>();


    public void Ajouter_Animale(Animal animal_x) {
        Animales.add(animal_x);
    }

    public void supp_Animale(Animal animal_x) {
        Animales_supp.add(animal_x);
    }



    public void Sauvgarder_Animale() {
        try (FileWriter file_animale = new FileWriter("ZOO.txt", true);
             PrintWriter print_animale = new PrintWriter(file_animale);) {

            for (Animal animal : Animales) {
                print_animale.println(animal);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void Sauvgarder_version2_Animale() {
        try (FileWriter file_animale = new FileWriter("ZOO.txt", true);
             PrintWriter print_animale = new PrintWriter(file_animale);) {

            for (Animal animal : Animales_supp) {
                print_animale.println(animal);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void Affichier_info_Animale() {
        File file_x = new File("ZOO.txt");

        try (Scanner reader = new Scanner(file_x)) {
            while (reader.hasNextLine()) {
                System.out.println(reader.nextLine());
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }


    public void Affichier_crie_Animale() {
        for (Animal animal : Animales) {
            animal.toString();
        }
    }

    public void chargerAnimauxDepuisFichier() {
        File file = new File("ZOO.txt");

        try (Scanner scanner = new Scanner(file)) {
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                String[] parts = line.split(",");
                String nom = parts[0];
                int id = Integer.parseInt(parts[1]);
                int age = Integer.parseInt(parts[2]);
                String type = parts[3];
                String sexe = parts[4];
                String region = parts[5];

                Animal animal = null;

                if (type.equalsIgnoreCase("lion")) {
                    animal = new Lion(sexe, id, region, nom, age, type);
                } else if (type.equalsIgnoreCase("oiseau")) {
                    animal = new Oiseau(sexe, id, region, nom, age, type);
                }

                if (animal != null) {
                    Ajouter_Animale(animal);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }


    public void supimer_Animale (int id  , String animale ){
        File file_x = new File("ZOO.txt");

            try(Scanner read = new Scanner(file_x)) {

                while (read.hasNextLine()) {
                    String Linge = read.nextLine();
                    String[] parties = Linge.split(",");
                    String nom = parties[0];
                    int idd  = Integer.parseInt(parties[1]);
                    int age = Integer.parseInt(parties[2]);
                    String type = parties[3];
                    String sexe = parties [4];
                    String region = parties[5];

                    if(type.toLowerCase().equalsIgnoreCase("lion")){
                        Lion lion = new Lion(sexe , idd , region , nom , age , type);
                        if(animale.toLowerCase().equalsIgnoreCase("lion")){
                        if(idd != id ){
                            supp_Animale(lion);
                        }}else {
                            if(idd != id ){
                                supp_Animale(lion);
                            }
                        }
                    }else if(type.toLowerCase().equalsIgnoreCase("oiseau")){
                        Oiseau oiseau = new Oiseau(sexe , idd , region , nom , age , type);
                        if(animale.toLowerCase().equalsIgnoreCase("lion")){
                            if(idd != id ){
                                supp_Animale(oiseau);
                            }}else {
                            if(idd != id ){
                                supp_Animale(oiseau);
                            }
                        }
                    }else{
                        System.out.println("error ...");
                    }

                }
                file_x.delete();
                File file_y = new File("ZOO.txt");


            }catch (IOException e){
                e.printStackTrace();
            }

        file_x.delete();
        File file_y = new File("ZOO.txt");


    }
}



