// Using the Status Window.
import java.awt.*;
import java.applet.*;
/* <applet code="StatusWindow" width=500 height=200> </applet> */

public class StatusWindow extends Applet
{
  public void init() 
  {
    setBackground(Color.pink);
	setForeground(Color.blue);
  }

  // Display msg in applet window.
  public void paint(Graphics g) {
    g.drawString("This is in the applet window.", 10, 100);
	//g.drawString("\n is not recognized here !",10,140);
    showStatus("This is shown in the status window.");
  }
}