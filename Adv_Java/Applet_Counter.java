import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

/* <applet code=Applet_Counter width=600 height=300> </applet> */

// Applet class for displaying buttons and counting clicks
public class Applet_Counter extends Applet implements ActionListener {

    // Button components
    Button button1, button2, button3, button4;

    // Counters for button clicks
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    // Method to initialize the applet
    public void init() {
        // Set the applet size
        setSize(400, 200);

        // Set the layout to flow layout
        setLayout(new FlowLayout());

        // Create buttons
        button1 = new Button("Button 1");
        button2 = new Button("Button 2");
        button3 = new Button("Button 3");
        button4 = new Button("Button 4");

        // Add action listeners to buttons
        button1.addActionListener(this);
        button2.addActionListener(this);
        button3.addActionListener(this);
        button4.addActionListener(this);

        // Add buttons to the applet
        add(button1);
        add(button2);
        add(button3);
        add(button4);
    }

    // Method to handle button clicks
    public void actionPerformed(ActionEvent e) {
        // Identify the source of the action event
        Object source = e.getSource();

        // Increment the corresponding click counter
        if (source == button1) {
            count1++;
            repaint();
        } else if (source == button2) {
            count2++;
            repaint();
        } else if (source == button3) {
            count3++;
            repaint();
        } else if (source == button4) {
            count4++;
            repaint();
        }
    }

    // Method to paint the button click counts
    public void paint(Graphics g) {
        g.drawString("Button 1 clicks: " + count1, 20, 100);
        g.drawString("Button 2 clicks: " + count2, 20, 120);
        g.drawString("Button 3 clicks: " + count3, 20, 140);
        g.drawString("Button 4 clicks: " + count4, 20, 160);
        g.drawString("Created By Adyanshi Singh | 03776803121 | IT-3", 20, 180);
    }
}
