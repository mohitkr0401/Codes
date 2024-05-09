import java.awt.*;
import java.applet.*;

/* <applet code=AppletConcept width=700 height=400> </applet> */

public class AppletConcept extends Applet {
    Label l1;
    Label l2;

    public void init() {
        l1 = new Label("Hello!!! Friends");
        l2 = new Label("Created By Mohit Kumar | 04076803121 | IT-3");
        l1.setBackground(Color.red);
        l2.setBackground(Color.cyan);
        l1.setForeground(Color.white); // set the foreground color of l1 to white
        l2.setForeground(Color.black);
        add(l1);
        add(l2);
    }
}