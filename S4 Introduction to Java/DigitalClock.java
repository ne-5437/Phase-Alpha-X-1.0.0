import java.util.*;
import java.applet.*;
import java.awt.*;
import java.text.*;

/*<applet code="DigitalClock" height=100 width=450></applet> */

public class DigitalClock extends Applet implements Runnable
{
	Thread t;
	Calendar c;
    Date d;
	
	public void init()
	{
		t= new Thread(this, "Time Thread");
		t.start();
	}
 
    public void run()
    {
		for(int i=0;i<60;i++)
		{
		   try
		   {
		      c=Calendar.getInstance();
			  d=c.getTime();
			  Thread.sleep(1000);
		   }
		   catch(Exception e){}
		   
		   repaint();
		}
	}
	
	public void paint(Graphics g)
	{
		g.setFont(new Font("Courier New",Font.ITALIC,20));
		g.drawString(d.toString(),30,20);
	}	
}	
		   
			  