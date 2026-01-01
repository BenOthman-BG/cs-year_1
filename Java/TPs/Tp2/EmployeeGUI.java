package JAvaTpfile;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.List;

public class EmployeeGUI extends JFrame {
    private JTextField idField, nameField, deptField;
    private JTextArea displayArea;
    private EmployeeManager manager;

    public EmployeeGUI() {
        manager = new EmployeeManager();
        setTitle("Gestion des Employés");
        setSize(500, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        add(new JLabel("ID:"));
        idField = new JTextField(10);
        add(idField);

        add(new JLabel("Nom:"));
        nameField = new JTextField(10);
        add(nameField);

        add(new JLabel("Service:"));
        deptField = new JTextField(10);
        add(deptField);

        JButton addButton = new JButton("Ajouter");
        addButton.addActionListener(e -> addEmployee());
        add(addButton);

        JButton deleteButton = new JButton("Supprimer");
        deleteButton.addActionListener(e -> deleteEmployee());
        add(deleteButton);

        JButton searchButton = new JButton("Rechercher");
        searchButton.addActionListener(e -> searchEmployee());
        add(searchButton);

        JButton displayButton = new JButton("Afficher tous");
        displayButton.addActionListener(e -> displayEmployees());
        add(displayButton);

        displayArea = new JTextArea(10, 40);
        displayArea.setEditable(false);
        add(new JScrollPane(displayArea));

        setVisible(true);
    }

    private void addEmployee() {
        String id = idField.getText();
        String name = nameField.getText();
        String dept = deptField.getText();
        if (!id.isEmpty() && !name.isEmpty() && !dept.isEmpty()) {
            manager.addEmployee(new Employee(id, name, dept));
            JOptionPane.showMessageDialog(this, "Employé ajouté!");
            clearFields();
        } else {
            JOptionPane.showMessageDialog(this, "Tous les champs sont requis!");
        }
    }

    private void deleteEmployee() {
        String id = idField.getText();
        if (!id.isEmpty()) {
            manager.deleteEmployee(id);
            JOptionPane.showMessageDialog(this, "Employé supprimé!");
            clearFields();
        } else {
            JOptionPane.showMessageDialog(this, "Veuillez entrer un ID!");
        }
    }

    private void searchEmployee() {
        String id = idField.getText();
        if (!id.isEmpty()) {
            Employee emp = manager.searchEmployee(id);
            if (emp != null) {
                nameField.setText(emp.getName());
                deptField.setText(emp.getDepartment());
                JOptionPane.showMessageDialog(this, "Employé trouvé!");
            } else {
                JOptionPane.showMessageDialog(this, "Employé non trouvé!");
            }
        } else {
            JOptionPane.showMessageDialog(this, "Veuillez entrer un ID!");
        }
    }

    private void displayEmployees() {
        List<Employee> employees = manager.getEmployees();
        displayArea.setText("");
        for (Employee emp : employees) {
            displayArea.append(emp.toString() + "\n");
        }
    }

    private void clearFields() {
        idField.setText("");
        nameField.setText("");
        deptField.setText("");
    }

    public static void main(String[] args) {
        new EmployeeGUI();
    }
}