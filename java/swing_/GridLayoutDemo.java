/*The Java GridLayout class is used to arrange the components in a rectangular grid. One component is displayed in each rectangle.
Constructors of GridLayout class
GridLayout(): creates a grid layout with one column per component in a row.
GridLayout(int rows, int columns): creates a grid layout with the given rows and columns but no gaps between the components.
GridLayout(int rows, int columns, int hgap, int vgap): creates a grid layout with the given rows and columns along with given horizontal and vertical gaps. */

import javax.swing.*;
import java.awt.*;

public class GridLayoutDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame("Grid Layout");

        JButton b1, b2, b3, b4, b5, b6;
        b1 = new JButton("1");
        b2 = new JButton("2");
        b3 = new JButton("3");
        b4 = new JButton("4");
        b5 = new JButton("5");
        b6 = new JButton("6");

        //  adding buttons to the frame
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);

        //  setting grid layout of 3 rows and 3 columns
        f.setLayout(new GridLayout(3,2));
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setSize(400, 400);
        f.setVisible(true);

    }
}
