package base_donnes;

import java.sql.*;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/ecole";
        String user = "root";
        String password = "";



        try{


            Connection conn = DriverManager.getConnection(url , user , password);

            Statement stm = conn.createStatement();
            ResultSet rs = stm.executeQuery("SELECT * FROM ETUDIANT ;");
            while (rs.next()){
                int id = rs.getInt("id");
                String nom = rs.getNString("nom");
                String prenom = rs.getNString("prenom");

                System.out.println("ID : "+id+"\nNom : "+nom+"\nPrenom : "+prenom);
            }


        }catch(SQLException e){
            throw new RuntimeException();

        }



        System.out.println("remplire la table etudiant : ");
        Scanner read = new Scanner(System.in);
        System.out.println("Id : ");
        int id = read.nextInt();
        read.nextLine();
        System.out.println("le nom : ");
        String nom = read.nextLine();
        System.out.println("le prenom : ");
        String prenom = read.nextLine();

        String sql = "INSERT INTO ETUDIANT VALUES ( ? , ? , ? );";

        try {

            Connection con = DriverManager.getConnection(url ,user,password);
            PreparedStatement ps = con.prepareStatement(sql);

            ps.setInt(1,id);
            ps.setString(2,nom);
            ps.setString(3,prenom);
            ps.executeUpdate();

        } catch (SQLException e) {
            throw new RuntimeException(e);
        }

        System.out.println(" tam ...");


    }
}
