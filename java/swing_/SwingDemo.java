import javax.swing.*;
import java.awt.*;

public class SwingDemo {

    public static void main(String[] args) {
        JFrame f = new JFrame("Swing Tutorial");

        JLabel l1 = new JLabel("Hello guys");
        l1.setBounds(120, 133, 100, 120);
        f.add(l1);

        JTextField t1 = new JTextField("manish don", 30);
        t1.setBounds(100, 100, 200, 20);
        f.add(t1);

        JButton b1 = new JButton("click");
        b1.setBounds(10, 10, 100, 40);
        f.add(b1);

        f.setSize(400, 500);
        // f.setLayout(new FlowLayout());
        f.setLayout(null);
        f.setVisible(true);
    }
}

// import javax.swing.*;
// import java.awt.*;
// import javax.swing.JButton;

// public class SwingDemo {
// public static void main(String[] args) {
// JFrame f = new JFrame("Swing Demo");
// f.setSize(400, 400);
// f.setLayout(new FlowLayout());
// f.setVisible(true);
// f.setSize(600, 400);

// JLabel l1 = new JLabel("Username:");
// f.add(l1);
// JTextField t1 = new JTextField(20);
// f.add(t1);
// JLabel l2 = new JLabel("Password:");
// f.add(l2);
// JTextField t2 = new JTextField(20);
// f.add(t2);
// JButton b1 = new JButton("Submit");
// f.add(b1);
// }
// }
