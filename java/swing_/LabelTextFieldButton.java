
// Java JLabel JTextField and JButton Example in one
import javax.swing.*;

public class LabelTextFieldButton {

    public static void main(String[] args) {
        JFrame f = new JFrame("Basic Components");
        JTextField t1, t2;
        JLabel l1, l2;
        JButton b1;

        l1 = new JLabel("Name:");
        l1.setBounds(20, 100, 50, 20);
        f.add(l1);

        t1 = new JTextField();
        t1.setBounds(90, 100, 150, 20);
        f.add(t1);

        l2 = new JLabel("Password:");
        l2.setBounds(20, 130, 90, 20);
        f.add(l2);

        t2 = new JTextField();
        t2.setBounds(130, 130, 150, 20);
        f.add(t2);

        JCheckBox c1 = new JCheckBox("Checkbox", true);
        c1.setBounds(10, 170, 100, 20);
        f.add(c1);

        b1 = new JButton("Login");
        b1.setBounds(140, 160, 90, 30);
        f.add(b1);

        f.setSize(400, 500);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}