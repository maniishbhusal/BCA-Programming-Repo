// The BorderLayout is used to arrange the components in five regions: north, south, east, west, and center. Each region (area) may contain one component only. It is the default layout of a frame or window. The BorderLayout provides five constants for each region:
// public static final int NORTH
// public static final int SOUTH
// public static final int EAST
// public static final int WEST
// public static final int CENTER
// Constructors of BorderLayout class:
//     • BorderLayout(): creates a border layout but with no gaps between the components.
//     • BorderLayout(int hgap, int vgap): creates a border layout with the given horizontal and vertical gaps between the components.

import javax.swing.*;
import java.awt.BorderLayout;

public class BorderLayoutDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame("Border Layout");

        JButton b1, b2, b3, b4, b5;
        b1 = new JButton("NORTH");
        b2 = new JButton("SOUTH");
        b3 = new JButton("EAST");
        b4 = new JButton("WEST");
        b5 = new JButton("CENTER");

        // f.setLayout(new BorderLayout());

        f.add(b1, BorderLayout.NORTH);
        f.add(b2, BorderLayout.SOUTH);
        f.add(b3, BorderLayout.EAST);
        f.add(b4, BorderLayout.WEST);
        f.add(b5, BorderLayout.CENTER);

        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setSize(300, 300);
        f.setVisible(true);
    }
}