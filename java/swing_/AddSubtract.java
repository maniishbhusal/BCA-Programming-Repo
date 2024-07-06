// Java Example to add and subtract two numbers 
import javax.swing.*;
import java.awt.event.*;

public class AddSubtract {

    public static void main(String[] args) {
        // Create a new JFrame with title "Add Subtract Program"
        JFrame f = new JFrame("Add Subtract Program");

        // Create first JTextField for the first number input
        JTextField tf1 = new JTextField();
        tf1.setBounds(50, 50, 200, 20);

        // Create second JTextField for the second number input
        JTextField tf2 = new JTextField();
        tf2.setBounds(50, 100, 200, 20);

        // Create third JTextField to display the result
        JTextField tf3 = new JTextField();
        tf3.setBounds(50, 150, 200, 20);
        tf3.setEditable(false); // Make the result field non-editable

        // Create button for addition operation
        JButton b1 = new JButton("+");
        b1.setBounds(55, 200, 50, 30);

        // Create button for subtraction operation
        JButton b2 = new JButton("-");
        b2.setBounds(110, 200, 50, 30);

        // Add ActionListener to the addition button
        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                try {
                    // Get text from text fields
                    String text1 = tf1.getText();
                    String text2 = tf2.getText();
                    // Parse text to integers
                    int a = Integer.parseInt(text1);
                    int b = Integer.parseInt(text2);
                    // Calculate sum
                    String sum = String.valueOf(a + b);
                    // Set result to the third text field
                    tf3.setText(sum);
                } catch (NumberFormatException ex) {
                    tf3.setText("Invalid input"); // Handle invalid input
                }
            }
        });

        // Add ActionListener to the subtraction button
        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                try {
                    // Get text from text fields
                    String text1 = tf1.getText();
                    String text2 = tf2.getText();
                    // Parse text to integers
                    int a = Integer.parseInt(text1);
                    int b = Integer.parseInt(text2);
                    // Calculate difference
                    String subtract = String.valueOf(a - b);
                    // Set result to the third text field
                    tf3.setText(subtract);
                } catch (NumberFormatException ex) {
                    tf3.setText("Invalid input"); // Handle invalid input
                }
            }
        });

        // Add all components to the frame
        f.add(tf1);
        f.add(tf2);
        f.add(tf3);
        f.add(b1);
        f.add(b2);

        // Set layout manager to null
        f.setLayout(null);
        // Set frame size
        f.setSize(400, 400);
        // Set default close operation
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // Make the frame visible
        f.setVisible(true);
    }
}
