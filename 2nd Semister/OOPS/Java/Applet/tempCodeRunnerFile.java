import java.applet.*;
import java.awt.*;

//<applet code="Myapplet.class" width="300" height="300"></applet>

public class Myapplet extends Applet
{
	public void paint(Graphics g)
	{
	g.drawString("Hello Java Applet",50,50);
	}
}