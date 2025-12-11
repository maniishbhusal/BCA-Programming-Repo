/*
 * ============================================================
 * WINDOW ADAPTER CLASS (java.awt.event.WindowAdapter)
 * ============================================================
 *
 * WindowAdapter is an abstract adapter class for receiving window events.
 * It implements WindowListener, WindowStateListener, and WindowFocusListener.
 *
 * WHY USE ADAPTER INSTEAD OF LISTENER?
 * ------------------------------------------------------------
 * - WindowListener interface has 7 methods that MUST be implemented
 * - WindowAdapter provides empty implementations of all methods
 * - You only override the methods you actually need
 * - Results in cleaner, shorter code
 *
 * COMPARISON:
 * ------------------------------------------------------------
 * Using WindowListener (must implement ALL 7 methods):
 *   frame.addWindowListener(new WindowListener() {
 *       public void windowOpened(WindowEvent e) { }
 *       public void windowClosing(WindowEvent e) { // your code }
 *       public void windowClosed(WindowEvent e) { }
 *       public void windowIconified(WindowEvent e) { }
 *       public void windowDeiconified(WindowEvent e) { }
 *       public void windowActivated(WindowEvent e) { }
 *       public void windowDeactivated(WindowEvent e) { }
 *   });
 *
 * Using WindowAdapter (only override what you need):
 *   frame.addWindowListener(new WindowAdapter() {
 *       public void windowClosing(WindowEvent e) { // your code }
 *   });
 *
 * METHODS AVAILABLE IN WindowAdapter:
 * ------------------------------------------------------------
 * From WindowListener:
 *   - windowOpened(WindowEvent e)      - Window first made visible
 *   - windowClosing(WindowEvent e)     - User attempts to close window
 *   - windowClosed(WindowEvent e)      - Window closed (after dispose)
 *   - windowIconified(WindowEvent e)   - Window minimized
 *   - windowDeiconified(WindowEvent e) - Window restored from minimized
 *   - windowActivated(WindowEvent e)   - Window becomes active (focused)
 *   - windowDeactivated(WindowEvent e) - Window loses focus
 *
 * From WindowStateListener:
 *   - windowStateChanged(WindowEvent e) - Window state changes
 *
 * From WindowFocusListener:
 *   - windowGainedFocus(WindowEvent e) - Window gains focus
 *   - windowLostFocus(WindowEvent e)   - Window loses focus
 *
 * COMMON USE CASES:
 * ------------------------------------------------------------
 * 1. Confirm before closing: Override windowClosing()
 * 2. Save data on close: Override windowClosing()
 * 3. Pause game when minimized: Override windowIconified()
 * 4. Track window state changes: Override windowStateChanged()
 *
 * ============================================================
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class WindowAdapterDemo {

    public static void main(String[] args) {
        JFrame frame = new JFrame("WindowAdapter Demo");

        JLabel titleLabel = new JLabel("Window Events Demo");
        titleLabel.setBounds(120, 10, 200, 25);
        titleLabel.setFont(new Font("Arial", Font.BOLD, 14));

        JLabel instructionLabel = new JLabel("Try: minimize, restore, close the window");
        instructionLabel.setBounds(70, 40, 300, 25);

        JTextArea eventLog = new JTextArea("Event Log:\n");
        eventLog.setBounds(20, 80, 350, 180);
        eventLog.setEditable(false);
        eventLog.setFont(new Font("Monospaced", Font.PLAIN, 12));

        JScrollPane scrollPane = new JScrollPane(eventLog);
        scrollPane.setBounds(20, 80, 350, 180);

        // Using WindowAdapter - only override methods we need
        // No need to implement all 7 methods like WindowListener
        frame.addWindowListener(new WindowAdapter() {
            @Override
            public void windowOpened(WindowEvent e) {
                eventLog.append("-> Window Opened\n");
            }

            @Override
            public void windowClosing(WindowEvent e) {
                eventLog.append("-> Window Closing (attempting to close)\n");
                // Show confirmation dialog
                int response = JOptionPane.showConfirmDialog(
                    frame,
                    "Are you sure you want to exit?",
                    "Confirm Exit",
                    JOptionPane.YES_NO_OPTION
                );
                if (response == JOptionPane.YES_OPTION) {
                    frame.dispose();
                }
            }

            @Override
            public void windowClosed(WindowEvent e) {
                System.out.println("Window Closed - Goodbye!");
                System.exit(0);
            }

            @Override
            public void windowIconified(WindowEvent e) {
                eventLog.append("-> Window Minimized\n");
            }

            @Override
            public void windowDeiconified(WindowEvent e) {
                eventLog.append("-> Window Restored\n");
            }

            @Override
            public void windowActivated(WindowEvent e) {
                eventLog.append("-> Window Activated (focused)\n");
            }

            @Override
            public void windowDeactivated(WindowEvent e) {
                eventLog.append("-> Window Deactivated (lost focus)\n");
            }
        });

        // Add components
        frame.add(titleLabel);
        frame.add(instructionLabel);
        frame.add(scrollPane);

        frame.setSize(400, 320);
        frame.setLayout(null);
        // Use DO_NOTHING so we can handle closing ourselves
        frame.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
        frame.setVisible(true);
    }
}
