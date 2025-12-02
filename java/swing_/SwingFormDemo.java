import javax.swing.*;
// import java.awt.*;

public class SwingFormDemo {

    public static void main(String[] args) {
        // Create JFrame
        JFrame frame = new JFrame("Welcome to JavaPoint");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // JLabel for Name
        JLabel nameLabel = new JLabel("Name:");
        nameLabel.setBounds(30, 20, 100, 25);

        // JTextField for Name input
        JTextField nameField = new JTextField();
        nameField.setBounds(130, 20, 200, 25);

        // JLabel for Password
        JLabel passLabel = new JLabel("Password:");
        passLabel.setBounds(30, 55, 100, 25);

        // JPasswordField for Password input
        JPasswordField passField = new JPasswordField();
        passField.setBounds(130, 55, 200, 25);

        // JLabel for Gender
        JLabel genderLabel = new JLabel("Gender:");
        genderLabel.setBounds(30, 90, 100, 25);

        // JRadioButton for Gender selection
        JRadioButton maleRadio = new JRadioButton("Male");
        maleRadio.setBounds(130, 90, 70, 25);

        JRadioButton femaleRadio = new JRadioButton("Female");
        femaleRadio.setBounds(210, 90, 80, 25); 

        // ButtonGroup to group radio buttons
        ButtonGroup genderGroup = new ButtonGroup();
        genderGroup.add(maleRadio);
        genderGroup.add(femaleRadio);

        // JLabel for Hobbies
        JLabel hobbyLabel = new JLabel("Hobbies:");
        hobbyLabel.setBounds(30, 125, 100, 25);

        // JCheckBox for Hobbies
        JCheckBox readingCheck = new JCheckBox("Reading");
        readingCheck.setBounds(130, 125, 80, 25);

        JCheckBox musicCheck = new JCheckBox("Music");
        musicCheck.setBounds(220, 125, 70, 25);

        JCheckBox sportsCheck = new JCheckBox("Sports");
        sportsCheck.setBounds(300, 125, 80, 25);

        // JLabel for Country
        JLabel countryLabel = new JLabel("Country:");
        countryLabel.setBounds(30, 160, 100, 25);

        // JComboBox for Country selection
        String[] countries = {"Nepal", "India", "USA", "UK", "Australia"};
        JComboBox<String> countryCombo = new JComboBox<>(countries);
        countryCombo.setBounds(130, 160, 150, 25);

        // JLabel for Comments
        JLabel commentLabel = new JLabel("Comments:");
        commentLabel.setBounds(30, 195, 100, 25);

        // JTextArea for Comments
        JTextArea commentArea = new JTextArea("Welcome to JavaPoint");
        commentArea.setBounds(130, 195, 250, 80);
        commentArea.setLineWrap(true);
        commentArea.setWrapStyleWord(true);

        // JButton for Submit
        JButton submitBtn = new JButton("Submit");
        submitBtn.setBounds(130, 290, 100, 30);

        // JButton for Reset
        JButton resetBtn = new JButton("Reset");
        resetBtn.setBounds(250, 290, 100, 30);

        // Add all components to frame
        frame.add(nameLabel);
        frame.add(nameField);
        frame.add(passLabel);
        frame.add(passField);
        frame.add(genderLabel);
        frame.add(maleRadio);
        frame.add(femaleRadio);
        frame.add(hobbyLabel);
        frame.add(readingCheck);
        frame.add(musicCheck);
        frame.add(sportsCheck);
        frame.add(countryLabel);
        frame.add(countryCombo);
        frame.add(commentLabel);
        frame.add(commentArea);
        frame.add(submitBtn);
        frame.add(resetBtn);

        // Frame settings
        frame.setSize(420, 380);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
