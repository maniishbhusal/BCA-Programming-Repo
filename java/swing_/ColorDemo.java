import javax.swing.*;
import java.awt.*;

public class ColorDemo {

    public static void main(String[] args) {
        JFrame frame = new JFrame("Color Class Demo");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Label with predefined color constants
        JLabel label1 = new JLabel("RED Color (Color.RED)");
        label1.setBounds(30, 20, 200, 25);
        label1.setForeground(Color.RED);

        JLabel label2 = new JLabel("BLUE Color (Color.BLUE)");
        label2.setBounds(30, 50, 200, 25);
        label2.setForeground(Color.BLUE);

        JLabel label3 = new JLabel("GREEN Color (Color.GREEN)");
        label3.setBounds(30, 80, 200, 25);
        label3.setForeground(Color.GREEN);

        // Label with RGB values
        JLabel label4 = new JLabel("Custom RGB (255, 128, 0) - Orange");
        label4.setBounds(30, 110, 250, 25);
        label4.setForeground(new Color(255, 128, 0));

        JLabel label5 = new JLabel("Custom RGB (128, 0, 128) - Purple");
        label5.setBounds(30, 140, 250, 25);
        label5.setForeground(new Color(128, 0, 128));

        // Panel with background color
        JPanel panel1 = new JPanel();
        panel1.setBounds(30, 180, 150, 50);
        panel1.setBackground(Color.YELLOW);
        JLabel panelLabel1 = new JLabel("Yellow Panel");
        panel1.add(panelLabel1);

        JPanel panel2 = new JPanel();
        panel2.setBounds(200, 180, 150, 50);
        panel2.setBackground(Color.CYAN);
        JLabel panelLabel2 = new JLabel("Cyan Panel");
        panel2.add(panelLabel2);

        // Panel with custom RGB background
        JPanel panel3 = new JPanel();
        panel3.setBounds(30, 250, 320, 50);
        panel3.setBackground(new Color(50, 50, 50));
        JLabel panelLabel3 = new JLabel("Dark Gray RGB(50,50,50)");
        panelLabel3.setForeground(Color.WHITE);
        panel3.add(panelLabel3);

        // Button with colors
        JButton btn = new JButton("Colored Button");
        btn.setBounds(30, 320, 150, 35);
        btn.setBackground(Color.MAGENTA);
        btn.setForeground(Color.WHITE);

        // Add components to frame
        frame.add(label1);
        frame.add(label2);
        frame.add(label3);
        frame.add(label4);
        frame.add(label5);
        frame.add(panel1);
        frame.add(panel2);
        frame.add(panel3);
        frame.add(btn);

        frame.setSize(400, 420);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
