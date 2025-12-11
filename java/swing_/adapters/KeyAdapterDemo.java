/*
 * ============================================================
 * KEY ADAPTER CLASS (java.awt.event.KeyAdapter)
 * ============================================================
 *
 * KeyAdapter is an abstract adapter class for receiving keyboard events.
 * It implements the KeyListener interface.
 *
 * WHY USE ADAPTER INSTEAD OF LISTENER?
 * ------------------------------------------------------------
 * - KeyListener interface has 3 methods that MUST be implemented
 * - KeyAdapter provides empty implementations of all methods
 * - You only override the methods you actually need
 * - Results in cleaner, shorter code
 *
 * COMPARISON:
 * ------------------------------------------------------------
 * Using KeyListener (must implement ALL 3 methods):
 *   textField.addKeyListener(new KeyListener() {
 *       public void keyPressed(KeyEvent e) { // your code }
 *       public void keyReleased(KeyEvent e) { }  // empty but required
 *       public void keyTyped(KeyEvent e) { }     // empty but required
 *   });
 *
 * Using KeyAdapter (only override what you need):
 *   textField.addKeyListener(new KeyAdapter() {
 *       public void keyPressed(KeyEvent e) { // your code }
 *   });
 *
 * METHODS AVAILABLE IN KeyAdapter:
 * ------------------------------------------------------------
 *   - keyPressed(KeyEvent e)  - Called when key is pressed down
 *   - keyReleased(KeyEvent e) - Called when key is released
 *   - keyTyped(KeyEvent e)    - Called when key is typed (pressed + released)
 *
 * USEFUL KeyEvent METHODS:
 * ------------------------------------------------------------
 *   - getKeyCode()    - Returns virtual key code (VK_ENTER, VK_A, etc.)
 *   - getKeyChar()    - Returns the character typed
 *   - isShiftDown()   - Returns true if Shift was held
 *   - isControlDown() - Returns true if Ctrl was held
 *   - isAltDown()     - Returns true if Alt was held
 *   - KeyEvent.getKeyText(keyCode) - Converts key code to readable text
 *
 * COMMON KEY CODES:
 * ------------------------------------------------------------
 *   VK_ENTER, VK_ESCAPE, VK_SPACE, VK_BACKSPACE, VK_DELETE
 *   VK_UP, VK_DOWN, VK_LEFT, VK_RIGHT (Arrow keys)
 *   VK_A to VK_Z (Letters)
 *   VK_0 to VK_9 (Numbers)
 *   VK_F1 to VK_F12 (Function keys)
 *
 * ============================================================
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class KeyAdapterDemo {

    public static void main(String[] args) {
        JFrame frame = new JFrame("KeyAdapter Demo");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel inputLabel = new JLabel("Type in the text field:");
        inputLabel.setBounds(20, 20, 200, 25);

        JTextField textField = new JTextField();
        textField.setBounds(20, 50, 250, 30);

        JLabel keyPressedLabel = new JLabel("Key Pressed: ");
        keyPressedLabel.setBounds(20, 100, 350, 25);

        JLabel keyCodeLabel = new JLabel("Key Code: ");
        keyCodeLabel.setBounds(20, 130, 350, 25);

        JLabel modifierLabel = new JLabel("Modifiers: None");
        modifierLabel.setBounds(20, 160, 350, 25);

        JLabel specialKeyLabel = new JLabel("Special Key: ");
        specialKeyLabel.setBounds(20, 190, 350, 25);

        // Using KeyAdapter - only override methods we need
        // No need to implement all 3 methods like KeyListener
        textField.addKeyListener(new KeyAdapter() {
            @Override
            public void keyPressed(KeyEvent e) {
                int keyCode = e.getKeyCode();
                char keyChar = e.getKeyChar();

                keyPressedLabel.setText("Key Pressed: " + KeyEvent.getKeyText(keyCode));
                keyCodeLabel.setText("Key Code: " + keyCode + " | Char: " + keyChar);

                // Check for modifier keys
                String modifiers = "";
                if (e.isShiftDown()) modifiers += "SHIFT ";
                if (e.isControlDown()) modifiers += "CTRL ";
                if (e.isAltDown()) modifiers += "ALT ";
                if (modifiers.isEmpty()) modifiers = "None";
                modifierLabel.setText("Modifiers: " + modifiers);

                // Check for special keys
                String special = "";
                if (keyCode == KeyEvent.VK_ENTER) special = "ENTER pressed!";
                else if (keyCode == KeyEvent.VK_ESCAPE) special = "ESCAPE pressed!";
                else if (keyCode == KeyEvent.VK_SPACE) special = "SPACE pressed!";
                else if (keyCode >= KeyEvent.VK_F1 && keyCode <= KeyEvent.VK_F12)
                    special = "Function key pressed!";
                else if (keyCode >= KeyEvent.VK_UP && keyCode <= KeyEvent.VK_RIGHT)
                    special = "Arrow key pressed!";
                specialKeyLabel.setText("Special Key: " + special);
            }

            // keyReleased and keyTyped not needed - no need to implement!
        });

        // Add components
        frame.add(inputLabel);
        frame.add(textField);
        frame.add(keyPressedLabel);
        frame.add(keyCodeLabel);
        frame.add(modifierLabel);
        frame.add(specialKeyLabel);

        frame.setSize(400, 280);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
