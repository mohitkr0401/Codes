import java.awt.*;
import java.applet.*;

/* <applet code=AppletConcept width=600 height=300> </applet> */

public class AppletConcept extends Applet {
    Label l1;
    Label l2;

    public void init() {
        l1 = new Label("Hello!!! World!!");
        l1.setBackground(Color.blue);
        l1.setForeground(Color.white);
        l1.setFont(new Font("Times New Roman", Font.BOLD, 24));
        l2 = new Label("Created By Prachi Sachdeva | 02176803121 | IT-3");
        l2.setBackground(Color.yellow);
        l2.setForeground(Color.black);
        l2.setFont(new Font("Times New Roman", Font.BOLD, 20));
        add(l1);
        add(l2);
    }
}