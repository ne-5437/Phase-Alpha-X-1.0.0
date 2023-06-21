import java.applet.Applet;
import java.awt.Graphics;

/* <applet code="LifeCycleApplet" width=300 height=300> </applet> */
public class LifeCycleApplet extends Applet
{	
	public void init()
	{
		System.out.println("This is init..");		
	}
	public void start()
	{
		System.out.println("Applet started...");		
	}
	public void paint(Graphics g)
	{
		g.drawString("Hello There!", 0, 50);
		System.out.println("Applet just painted");		
	}
	public void stop()
	{
		System.out.println("Applet stopped");		
	}
	public void destroy(){
		System.out.println("Applet destroyed...");		
	}
		
}