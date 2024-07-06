/*The JPanel is a simplest container class. It provides space in which an application can attach any other component. It inherits the JComponents class.
It doesn't have title bar.
Commonly used Constructors:
JPanel() - It is used to create a new JPanel with a double buffer and a flow layout.
JPanel(LayoutManager layout) - It is used to create a new JPanel with the specified layout manager.
 */

import javax.swing.*;
import java.awt.*;

public class JPanelDemo {

    public static void main(String[] args) {
        JFrame f = new JFrame("JPanel Example");
        JPanel panel = new JPanel();
        panel.setBounds(40, 80, 200, 200);
        panel.setBackground(Color.gray);
        JButton b1 = new JButton("Button 1");
        b1.setBounds(50, 100, 80, 30);
        b1.setBackground(Color.yellow);

        JButton b2 = new JButton("Button 2");
        b2.setBounds(100, 100, 80, 30);
        b2.setBackground(Color.green);

        panel.add(b1);
        panel.add(b2);
        f.add(panel);

        f.setSize(400, 400);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}