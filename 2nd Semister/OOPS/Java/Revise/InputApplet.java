import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="InputApplet.class" width="400" height=400></applet> */
public class InputApplet extends Applet implements ActionListener 
{
    TextField textField1,textField2;
    Label label1,label2;

    public void init() {
        label1 = new Label("Enter your name:");
        add(label1);

        textField1 = new TextField(20);
        add(textField1);

        textField1.addActionListener(this);

        label2 = new Label("\nEnter your name:");
        add(label2);

        textField2 = new TextField(10);
        add(textField2);

        textField2.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        String input1 = textField1.getText();
        label1.setText("Hello, " + input1 + "!");
        String input = textField2.getText();
        label2.setText("Hello, " + input + "!");
    }
}