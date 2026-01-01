package File_tp;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Ex2 {
    public static void main(String[] args) {
        try {
        File read = new File("taalab");
        File stok = new File("Sommme.txt");
        FileWriter fw = new FileWriter(stok);
        PrintWriter pw = new PrintWriter(fw);
        Scanner reader = new Scanner(read);
        while (reader.hasNextInt()) {
            int a = reader.nextInt();
            int b = reader.nextInt();
            int c = reader.nextInt();
            int s = a + b + c ;
            pw.println(s);
         }
        pw.close();
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
}

