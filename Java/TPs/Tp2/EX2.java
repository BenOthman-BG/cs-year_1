package JAvaTpfile;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;

public class EX2 {
    private static final String URL = "jdbc:mysql://localhost:3306/entreprise";
    private static final String USER = "root";
    private static final String PASSWORD = "";

    private JFrame frame;
    private JTable table;
    private DefaultTableModel model;
    private JTextField nameField, jobField;

    public EX2() {
        frame = new JFrame("Gestion des Employés");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(600, 400);
        frame.setLayout(new BorderLayout());

        model = new DefaultTableModel();
        table = new JTable(model);
        model.addColumn("ID");
        model.addColumn("Nom");
        model.addColumn("Poste");

        loadEmployers();

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new GridLayout(3, 2));
        inputPanel.add(new JLabel("Nom:"));
        nameField = new JTextField();
        inputPanel.add(nameField);
        inputPanel.add(new JLabel("Poste:"));
        jobField = new JTextField();
        inputPanel.add(jobField);
        JButton addButton = new JButton("Ajouter");
        inputPanel.add(addButton);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addEmployer(nameField.getText(), jobField.getText());
                loadEmployers();
            }
        });

        frame.add(new JScrollPane(table), BorderLayout.CENTER);
        frame.add(inputPanel, BorderLayout.SOUTH);

        frame.setVisible(true);
    }

    private void loadEmployers() {
        model.setRowCount(0);
        try (Connection conn = DriverManager.getConnection(URL, USER, PASSWORD);
             Statement stmt = conn.createStatement();
             ResultSet rs = stmt.executeQuery("SELECT * FROM employer")) {
            while (rs.next()) {
                model.addRow(new Object[]{rs.getInt("id"), rs.getString("nom"), rs.getString("poste")});
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private void addEmployer(String name, String job) {
        try (Connection conn = DriverManager.getConnection(URL, USER, PASSWORD);
             PreparedStatement pstmt = conn.prepareStatement("INSERT INTO employer (nom, poste) VALUES (?, ?)") ) {
            pstmt.setString(1, name);
            pstmt.setString(2, job);
            pstmt.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(EX2::new);
    }
}