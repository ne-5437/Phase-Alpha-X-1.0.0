import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;
/*<applet code=AppletTitle width = 330 height=400></applet*/
public class AppletTitle extends Applet  
{

    public void init()
    {
		Frame title = (Frame)this.getParent().getParent();
		title.setTitle("My New Applet");
		
        setForeground(Color.blue);
        setBackground(Color.lightGray);
        Font font = new Font("Verdana", Font.BOLD, 20);
        setFont(font);
        
	}
    
	public void paint(Graphics g)
	{
		g.drawString("My New Applet with Title!", 0, 50);

	}
    
}