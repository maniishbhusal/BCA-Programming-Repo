import javax.swing.*;
import java.awt.*;

/*
 * ============================================================
 * FONT CLASS IN JAVA AWT
 * ============================================================
 *
 * The Font class (java.awt.Font) is used to render text in a
 * visible way. It defines the appearance of text including:
 * - Font family (Arial, Times New Roman, etc.)
 * - Font style (PLAIN, BOLD, ITALIC)
 * - Font size (in points)
 *
 * ============================================================
 * FONT CONSTRUCTORS:
 * ============================================================
 * 1. Font(String name, int style, int size)
 *    - name: Font family name (e.g., "Arial", "Serif")
 *    - style: Font.PLAIN, Font.BOLD, Font.ITALIC, or Font.BOLD + Font.ITALIC
 *    - size: Font size in points
 *
 * 2. Font.createFont(int fontFormat, File fontFile)
 *    - Creates a new Font from a font file
 *    - fontFormat: Font.TRUETYPE_FONT or Font.TYPE1_FONT
 *    - fontFile: File object pointing to the font file
 *
 * 3. Font.createFont(int fontFormat, InputStream fontStream)
 *    - Creates a new Font from an input stream
 *
 * ============================================================
 * COMMON FONT METHODS:
 * ============================================================
 *
 * canDisplay(char c)
 *    - Returns true if font can display the specified character
 *    - Example: font.canDisplay('A') returns true
 *
 * canDisplay(int codePoint)
 *    - Returns true if font can display the Unicode code point
 *    - Example: font.canDisplay(65) returns true (65 = 'A')
 *
 * canDisplayUpTo(String str)
 *    - Returns index of first char that cannot be displayed
 *    - Returns -1 if all characters can be displayed
 *
 * deriveFont(int style)
 *    - Creates a new Font with different style
 *    - Example: font.deriveFont(Font.BOLD)
 *
 * deriveFont(float size)
 *    - Creates a new Font with different size
 *    - Example: font.deriveFont(24.0f)
 *
 * equals(Object obj)
 *    - Compares two Font objects for equality
 *    - Returns true if same family, style, and size
 *
 * getFamily()
 *    - Returns the font family name
 *    - Example: "Arial", "Dialog"
 *
 * getFontName()
 *    - Returns the font face name
 *    - Example: "Arial Bold"
 *
 * getName()
 *    - Returns the logical name of the font
 *
 * getSize()
 *    - Returns the font size in points
 *
 * getStyle()
 *    - Returns the style (PLAIN=0, BOLD=1, ITALIC=2)
 *
 * isBold()
 *    - Returns true if font style is BOLD
 *
 * isItalic()
 *    - Returns true if font style is ITALIC
 *
 * isPlain()
 *    - Returns true if font style is PLAIN
 *
 * ============================================================
 * FONT STYLE CONSTANTS:
 * ============================================================
 * Font.PLAIN  = 0 (Normal text)
 * Font.BOLD   = 1 (Bold text)
 * Font.ITALIC = 2 (Italic text)
 * Font.BOLD + Font.ITALIC = 3 (Bold and Italic)
 *
 * ============================================================
 */

public class FontDemo {

    public static void main(String[] args) {
        JFrame frame = new JFrame("Font Class Demo");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Different Font Styles
        JLabel label1 = new JLabel("Arial PLAIN 16");
        label1.setBounds(30, 20, 300, 30);
        label1.setFont(new Font("Arial", Font.PLAIN, 16));

        JLabel label2 = new JLabel("Arial BOLD 18");
        label2.setBounds(30, 55, 300, 30);
        label2.setFont(new Font("Arial", Font.BOLD, 18));

        JLabel label3 = new JLabel("Arial ITALIC 18");
        label3.setBounds(30, 90, 300, 30);
        label3.setFont(new Font("Arial", Font.ITALIC, 18));

        JLabel label4 = new JLabel("Arial BOLD+ITALIC 18");
        label4.setBounds(30, 125, 300, 30);
        label4.setFont(new Font("Arial", Font.BOLD + Font.ITALIC, 18));

        // Different Font Families
        JLabel label5 = new JLabel("Times New Roman - Serif Font");
        label5.setBounds(30, 170, 350, 30);
        label5.setFont(new Font("Times New Roman", Font.PLAIN, 18));

        JLabel label6 = new JLabel("Courier New - Monospace Font");
        label6.setBounds(30, 205, 350, 30);
        label6.setFont(new Font("Courier New", Font.PLAIN, 16));

        JLabel label7 = new JLabel("Dialog - Default Java Font");
        label7.setBounds(30, 240, 350, 30);
        label7.setFont(new Font("Dialog", Font.BOLD, 16));

        // Demonstrating Font Methods
        Font testFont = new Font("Arial", Font.BOLD, 20);

        // canDisplay() method
        boolean canDisplayA = testFont.canDisplay('A');
        boolean canDisplayCodePoint = testFont.canDisplay(65); // 65 = 'A'

        // Font information methods
        String fontFamily = testFont.getFamily();
        String fontName = testFont.getFontName();
        int fontSize = testFont.getSize();
        int fontStyle = testFont.getStyle();
        boolean isBold = testFont.isBold();
        boolean isItalic = testFont.isItalic();
        boolean isPlain = testFont.isPlain();

        // equals() method
        Font anotherFont = new Font("Arial", Font.BOLD, 20);
        boolean fontsEqual = testFont.equals(anotherFont);

        // deriveFont() method - create variations
        Font derivedSize = testFont.deriveFont(24.0f);
        Font derivedStyle = testFont.deriveFont(Font.ITALIC);

        // Display Font Method Results
        JTextArea infoArea = new JTextArea();
        infoArea.setBounds(30, 285, 420, 200);
        infoArea.setFont(new Font("Monospaced", Font.PLAIN, 12));
        infoArea.setEditable(false);
        infoArea.setText(
            "=== Font Methods Demo ===\n\n" +
            "Test Font: new Font(\"Arial\", Font.BOLD, 20)\n\n" +
            "canDisplay('A'): " + canDisplayA + "\n" +
            "canDisplay(65): " + canDisplayCodePoint + "\n" +
            "getFamily(): " + fontFamily + "\n" +
            "getFontName(): " + fontName + "\n" +
            "getSize(): " + fontSize + "\n" +
            "getStyle(): " + fontStyle + " (BOLD=1)\n" +
            "isBold(): " + isBold + "\n" +
            "isItalic(): " + isItalic + "\n" +
            "isPlain(): " + isPlain + "\n" +
            "equals(sameFont): " + fontsEqual + "\n" +
            "deriveFont(24.0f) size: " + derivedSize.getSize() + "\n" +
            "deriveFont(ITALIC) isItalic: " + derivedStyle.isItalic()
        );

        // Add components to frame
        frame.add(label1);
        frame.add(label2);
        frame.add(label3);
        frame.add(label4);
        frame.add(label5);
        frame.add(label6);
        frame.add(label7);
        frame.add(infoArea);

        frame.setSize(480, 530);
        frame.setLayout(null);
        frame.getContentPane().setBackground(new Color(255, 255, 224)); // Light Yellow
        frame.setVisible(true);
    }
}
