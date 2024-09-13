import java.applet.*;
import java.awt.*;
import java.awt.event.*;

//<applet code="Myapplet2" width="300" height="300"></applet>

public class Myapplet2 extends Applet
{
	Label l1,l2,l3,l4;
	TextField t1,t2;
	Button b1,b2;
	
	public void init()
	{
	l1=new Label("First Number");
	l2=new Label("Second Number");
	l3=new Label("");
	l4=new Label("");
	t1=new TextField();
	t2=new TextField();
	b1=new Button("Add");
	b2=new Button("Substract");
	setLayout(null);
	l1.setBounds(30,50,100,20);
	l2.setBounds(30,100,100,20);
	t1.setBounds(150,50,100,20);
	t2.setBounds(150,100,100,20);
	b1.setBounds(50,150,80,20);
	b2.setBounds(150,150,80,20);
	l3.setBounds(30,180,100,20);
	l4.setBounds(30,210,120,20);
	add(t1);
	add(t2);
	add(l1);
	add(l2);
	add(b1);
	add(b2);
	add(l3);
	add(l4);
	b1.addActionListener(new MyHandler1());
	b2.addActionListener(new MyHandler2());
	}

	public class MyHandler1 implements ActionListener
	{
	public void actionPerformed(ActionEvent e)
	{
	int a,b,sum=0;
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	sum=a+b;
	l3.setText("Sum is:"+sum);
	}
	}

	public class MyHandler2 implements ActionListener
	{
	public void actionPerformed(ActionEvent e)
	{
	int a,b,subs=0;
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	subs=a-b;
	l4.setText("Substraction is:"+subs);	
	}
	}

}


