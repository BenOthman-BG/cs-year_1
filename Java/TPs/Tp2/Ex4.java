package JAvaTpfile;

import java.io.*;
import java.sql.*;
import java.util.*;

class Etudiant {
    int id;
    String name;
    double grade;

    public Etudiant(int id, String name, double grade) {
        this.id = id;
        this.name = name;
        this.grade = grade;
    }
}

public class Ex4 {
    public static void main(String[] args) {
        List<Etudiant> etudiants = Arrays.asList(
                new Etudiant(1, "Ali", 15.5),
                new Etudiant(2, "Sara", 17.8),
                new Etudiant(3, "Omar", 12.3)
        );

        try (Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/ecole", "root", "")) {
            Statement st = conn.createStatement();
            st.execute("CREATE TABLE IF NOT EXISTS Etudiant (id INT PRIMARY KEY, name VARCHAR(50), grade DOUBLE)");

            PreparedStatement ps = conn.prepareStatement("INSERT INTO Etudiant VALUES (?, ?, ?)");
            for (Etudiant e : etudiants) {
                ps.setInt(1, e.id);
                ps.setString(2, e.name);
                ps.setDouble(3, e.grade);
                ps.executeUpdate();
            }

            ResultSet rs = st.executeQuery("SELECT * FROM Etudiant ORDER BY grade DESC LIMIT 1");
            BufferedWriter writer = new BufferedWriter(new FileWriter("top_etudiant.txt"));
            if (rs.next()) {
                writer.write("Top Etudiant: " + rs.getString("name") + " avec " + rs.getDouble("grade") + " de note.");
            }
            writer.close();
            System.out.println("Résultat écrit dans top_etudiant.txt");

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}