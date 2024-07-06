/*The JTable class is used to display data in tabular form. It is composed of rows and columns.
Commonly used Constructors:
JTable() - Creates a table with empty cells.
JTable(Object[][] rows, Object[] columns) - Creates a table with the specified data.
 */

import javax.swing.*;

public class JTableDemo {

    public static void main(String[] args) {
        JFrame f = new JFrame("JTable Example");
        String data[][] = { { "1", "Manish", "Ghorahi" }, { "2", "Grishma", "Ghorahi" },
                { "3", "Benjamin", "Tulsipur" } };
        String column[] = { "ID", "Name", "Address" };
        JTable t = new JTable(data, column);
        t.setBounds(30, 40, 200, 100);
        f.add(t);
        f.setSize(300, 400);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}