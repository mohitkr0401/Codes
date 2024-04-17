import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*<applet code=Exp21 width=300 height=300> </applet>*/
public class Exp21 extends Applet implements ActionListener {
    String msg = "";
    String data = "";
    Button select;
    TextArea ta;

    public void init() {
        data = "COUNTRY NAME: INDIA\n" + "CAPITAL NAME: DELHI\n" +
                "STATE NAME: DELHI";
        ta = new TextArea(data, 5, 30);
        add(ta);
        select = new Button("SELECT");
        add(select);
        select.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource() == select) {
            msg = ta.getSelectedText();
        }
        repaint();
    }

    public void paint(Graphics g) {
        g.drawString(msg, 10, 150);
    }
}