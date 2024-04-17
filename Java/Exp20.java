import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/* <applet code=Exp20 width=150 height=150></applet>
<param name=N1 value=5>
*/
public class Exp20 extends Applet implements ItemListener, ActionListener {
    String s1;
    int n1;
    TextField tf1, tf2;
    Button result;
    Checkbox cb1, cb2;
    CheckboxGroup cbg;

    public void init() {
        Label f = new Label("ENTER AMOUNT OF LOAN", Label.RIGHT);
        Label s = new Label("ENTER INTEREST RATE", Label.RIGHT);
        tf1 = new TextField(4);
        tf2 = new TextField(4);
        add(f);
        add(tf1);
        add(s);
        add(tf2);
        cbg = new CheckboxGroup();
        cb1 = new Checkbox("MONTHLY RATE", cbg, true);
        cb2 = new Checkbox("YEARLY RATE", cbg, false);
        result = new Button("LOAN PAYMENT AMOUNT");
        add(cb1);
        add(cb2);
        add(result);
        cb1.addItemListener(this);
        cb2.addItemListener(this);
        result.addActionListener(this);
        s1 = getParameter("N1");
        if (s1 != null) {
            n1 = Integer.parseInt(s1);
        }
    }

    public void itemStateChanged(ItemEvent ie) { // WRITE PROGRAM HERE
    }

    public void actionPerformed(ActionEvent ae) { // WRITE PROGRAM HERE
    }

    public void paint(Graphics g) { // WRITE PROGRAM HERE
    }
}