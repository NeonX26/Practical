import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="CalculatorApplet.class" width="400" height=400></applet> */

public class CalculatorApplet extends Applet implements ActionListener {
    TextField textField1, textField2;
    Label label1, label2,label3,label4;
    Button addButton, subtractButton;

    public void init() {
        label1 = new Label("Enter first number:");
        add(label1);

        textField1 = new TextField(10);
        add(textField1);

        label2 = new Label("Enter second number:");
        add(label2);

        textField2 = new TextField(10);
        add(textField2);

        addButton = new Button("Add");
        add(addButton);
        addButton.addActionListener(this);

        subtractButton = new Button("Subtract");
        add(subtractButton);
        subtractButton.addActionListener(this);

        label3 = new Label("");
        add(label3);
        label4 = new Label();
        add(label4);

    }

    public void actionPerformed(ActionEvent e) {
        String input1 = textField1.getText();
        String input2 = textField2.getText();

        if (e.getSource() == addButton) {
            int num1 = Integer.parseInt(input1);
            int num2 = Integer.parseInt(input2);
            int sum = num1 + num2;
            label3.setText("Sum: " + sum);
        } else if (e.getSource() == subtractButton) {
            int num1 = Integer.parseInt(input1);
            int num2 = Integer.parseInt(input2);
            int difference = num1 - num2;
            label4.setText(difference);
        }
    }
}