// Java Event Handling Code
import javax.swing.*;
import java.awt.event.*;

public class BasicEventHandling {

    public static void main(String[] args) {
        JFrame f = new JFrame("Even Handling Example");

        JTextField tf = new JTextField();
        tf.setBounds(60, 50, 170, 20);

        JButton b = new JButton("Click Me");
        b.setBounds(100, 170, 120, 30);

        // Adding the ActionListener using an anonymous inner class
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                tf.setText("Welcome");
            }
        });

        f.add(tf);
        f.add(b);

        f.setLayout(null);
        f.setSize(400, 400);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}