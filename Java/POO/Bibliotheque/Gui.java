package Bibliotheque;


import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Scanner;

public class Gui extends JFrame {

    //declaration
    JLabel Label_Livre_name ;
    JTextField txt_livre_name;
    JLabel label_livre_autour ;
    JTextField txt_livre_autour;
    JLabel label_livre_disponible;
    JCheckBox check_livre_disponible;
    JButton btn_close;
    JButton btn_Ajouter;
    JComboBox combo ;
    JRadioButton r1 ;
    JRadioButton r2;

    //constructor
    public Gui (){
        //organiser Jfram
        this.setTitle("Ajouter Livre");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(300,500);
        this.setLocationRelativeTo(null);
        this.setLayout(null);//no thinks I will manage the objects myself
        this.getContentPane().setBackground(new Color(255, 111, 111, 157));

        //creation des object
        Label_Livre_name = new JLabel(" Livre name : ");
        txt_livre_name = new JTextField();
        label_livre_autour = new JLabel("L'autour : ");
        txt_livre_autour = new JTextField();
        label_livre_disponible = new JLabel("Is disponible : ");
        check_livre_disponible = new JCheckBox();
        btn_Ajouter = new JButton("Ajouter");
        btn_close = new JButton("close");
        String[] option = {"red" , "Green" ,"blue"};
        combo = new JComboBox(option);
        r1 = new JRadioButton("Homme");
        r2 = new JRadioButton("femme");
        ButtonGroup gr = new ButtonGroup();
        gr.add(r1);
        gr.add(r2);


        //plaacement des object

        Label_Livre_name.setBounds(10,120,80 ,20);
        txt_livre_name.setBounds(100 , 120 , 180 , 20);
        label_livre_autour.setBounds(10,160,80,20);
        txt_livre_autour.setBounds(100,160,180,20);
        label_livre_disponible.setBounds(10,200 ,80,20);
        check_livre_disponible.setBounds(100,200,180,20);

        btn_close.setBounds(10,240,80,20);
        btn_Ajouter.setBounds(200,240,80,20);
        combo.setBounds(100 , 280 , 80 ,20);
        r1.setBounds(100,300 , 80,20);
        r1.setBounds(160,300 , 80,20);




        //add des object
        this.add(Label_Livre_name);
        this.add(txt_livre_name);
        this.add(label_livre_autour);
        this.add(txt_livre_autour);
        this.add(label_livre_disponible);
        this.add(check_livre_disponible);
        this.add(btn_Ajouter);
        this.add(btn_close);
        this.add(combo);
        this.add(r1);
        this.add(r2);


        //all visible

        this.setVisible(true);

        //Action

        btn_close.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dispose();
            }
        });

        btn_Ajouter.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if(txt_livre_name.getText().isEmpty() || txt_livre_autour.getText().isEmpty()){
                    JOptionPane.showMessageDialog(Gui.this , "please fill all fields " ,
                            "validation error " ,JOptionPane.ERROR_MESSAGE);
                }else{
                    String check;
                    if(check_livre_disponible.isSelected()){
                        check = "Disponible";
                    }else{
                        check = "indesponible";
                    }
                    livre livre1 = new livre(txt_livre_name.getText(), txt_livre_autour.getText() ,check);
                    bib biblio = new bib();
                    biblio.ajouter_livre(livre1);
                    biblio.sauvegarderlivre();
                    txt_livre_name.setText("");
                    txt_livre_autour.setText("");
                    check_livre_disponible.setSelected(false);
                    JOptionPane.showMessageDialog(Gui.this , "Livre Ajouter .");
                }
            }
        });
    }
}
