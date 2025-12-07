// Java Event Handling Code
import javax.swing.*;
import java.awt.event.*;

public class BasicEventHandling {

    public static void main(String[] args) {
        JFrame f = new JFrame("Even Handling Example");

        JLabel nameLabel = new JLabel("Enter Name:");
        nameLabel.setBounds(60, 20, 100, 20);

        JTextField tf = new JTextField();
        tf.setBounds(60, 50, 170, 20);

        JButton b = new JButton("Click Me");
        b.setBounds(100, 170, 120, 30);

        JLabel resultLabel = new JLabel();
        resultLabel.setBounds(60, 100, 200, 20);

        // Adding the ActionListener using an anonymous inner class
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String name = tf.getText();
                resultLabel.setText("Welcome " + name);
            }
        });

        f.add(nameLabel);
        f.add(resultLabel);

        f.add(tf);
        f.add(b);

        f.setLayout(null);
        f.setSize(400, 400);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}