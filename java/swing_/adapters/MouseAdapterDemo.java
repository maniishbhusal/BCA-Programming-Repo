/*
 * ============================================================
 * MOUSE ADAPTER CLASS (java.awt.event.MouseAdapter)
 * ============================================================
 *
 * MouseAdapter is an abstract adapter class for receiving mouse events.
 * It implements MouseListener, MouseWheelListener, and MouseMotionListener.
 *
 * WHY USE ADAPTER INSTEAD OF LISTENER?
 * ------------------------------------------------------------
 * - MouseListener interface has 5 methods that MUST be implemented
 * - MouseAdapter provides empty implementations of all methods
 * - You only override the methods you actually need
 * - Results in cleaner, shorter code
 *
 * COMPARISON:
 * ------------------------------------------------------------
 * Using MouseListener (must implement ALL 5 methods):
 *   panel.addMouseListener(new MouseListener() {
 *       public void mouseClicked(MouseEvent e) { // your code }
 *       public void mousePressed(MouseEvent e) { }  // empty but required
 *       public void mouseReleased(MouseEvent e) { } // empty but required
 *       public void mouseEntered(MouseEvent e) { }  // empty but required
 *       public void mouseExited(MouseEvent e) { }   // empty but required
 *   });
 *
 * Using MouseAdapter (only override what you need):
 *   panel.addMouseListener(new MouseAdapter() {
 *       public void mouseClicked(MouseEvent e) { // your code }
 *   });
 *
 * METHODS AVAILABLE IN MouseAdapter:
 * ------------------------------------------------------------
 * From MouseListener:
 *   - mouseClicked(MouseEvent e)
 *   - mousePressed(MouseEvent e)
 *   - mouseReleased(MouseEvent e)
 *   - mouseEntered(MouseEvent e)
 *   - mouseExited(MouseEvent e)
 *
 * From MouseMotionListener:
 *   - mouseMoved(MouseEvent e)
 *   - mouseDragged(MouseEvent e)
 *
 * From MouseWheelListener:
 *   - mouseWheelMoved(MouseWheelEvent e)
 *
 * ============================================================
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MouseAdapterDemo {

    public static void main(String[] args) {
        JFrame frame = new JFrame("MouseAdapter Demo");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel infoLabel = new JLabel("Interact with the panel below");
        infoLabel.setBounds(20, 10, 300, 25);

        // Panel for mouse interaction
        JPanel mousePanel = new JPanel();
        mousePanel.setBounds(20, 40, 350, 150);
        mousePanel.setBackground(Color.LIGHT_GRAY);
        mousePanel.setLayout(null);

        JLabel panelLabel = new JLabel("Mouse Area - Click or Move here");
        panelLabel.setBounds(80, 60, 200, 25);
        mousePanel.add(panelLabel);

        JLabel resultLabel = new JLabel("Event: Waiting...");
        resultLabel.setBounds(20, 200, 350, 25);

        JLabel positionLabel = new JLabel("Position: X=0, Y=0");
        positionLabel.setBounds(20, 230, 350, 25);

        // Using MouseAdapter - only override methods we need
        // No need to implement all 5 methods like MouseListener
        mousePanel.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                resultLabel.setText("Event: Mouse Clicked at (" + e.getX() + ", " + e.getY() + ")");
                mousePanel.setBackground(Color.GREEN);
            }

            @Override
            public void mouseEntered(MouseEvent e) {
                resultLabel.setText("Event: Mouse Entered Panel");
                mousePanel.setBackground(Color.CYAN);
            }

            @Override
            public void mouseExited(MouseEvent e) {
                resultLabel.setText("Event: Mouse Exited Panel");
                mousePanel.setBackground(Color.LIGHT_GRAY);
            }
            // mousePressed and mouseReleased not needed - no need to implement!
        });

        // MouseAdapter also works for MouseMotionListener
        mousePanel.addMouseMotionListener(new MouseAdapter() {
            @Override
            public void mouseMoved(MouseEvent e) {
                positionLabel.setText("Position: X=" + e.getX() + ", Y=" + e.getY());
            }

            @Override
            public void mouseDragged(MouseEvent e) {
                positionLabel.setText("Dragging: X=" + e.getX() + ", Y=" + e.getY());
            }
        });

        // Add components
        frame.add(infoLabel);
        frame.add(mousePanel);
        frame.add(resultLabel);
        frame.add(positionLabel);

        frame.setSize(400, 320);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
