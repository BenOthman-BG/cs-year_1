package JAvaTpfile;

import java.io.*;
import java.util.*;

public class EmployeeManager {
    private static final String FILE_NAME = "employees.txt";
    private List<Employee> employees;

    public EmployeeManager() {
        employees = new ArrayList<>();
        loadEmployees();
    }

    public void addEmployee(Employee emp) {
        employees.add(emp);
        saveEmployees();
    }

    public void deleteEmployee(String id) {
        employees.removeIf(emp -> emp.getId().equals(id));
        saveEmployees();
    }

    public Employee searchEmployee(String id) {
        return employees.stream().filter(emp -> emp.getId().equals(id)).findFirst().orElse(null);
    }

    public List<Employee> getEmployees() {
        return employees;
    }

    private void loadEmployees() {
        employees.clear();
        try (BufferedReader br = new BufferedReader(new FileReader(FILE_NAME))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split(",");
                if (parts.length == 3) {
                    employees.add(new Employee(parts[0], parts[1], parts[2]));
                }
            }
        } catch (IOException e) {
            System.out.println("Error loading employees: " + e.getMessage());
        }
    }

    private void saveEmployees() {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(FILE_NAME))) {
            for (Employee emp : employees) {
                bw.write(emp.toString());
                bw.newLine();
            }
        } catch (IOException e) {
            System.out.println("Error saving employees: " + e.getMessage());
        }
    }
}