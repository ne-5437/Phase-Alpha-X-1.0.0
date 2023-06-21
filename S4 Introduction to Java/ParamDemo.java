import java.awt.*;
import java.applet.*;
/*
<applet code="ParamDemo" width=500 height=500>
<param name=fontName value=Courier> <param name=fontSize value=14>
<param name=accountEnabled value=true> </applet>
*/
public class ParamDemo extends Applet{
  String fontName;   int fontSize;   boolean active;
  
// Get the parameters
  public void start() 
  {
		String param;
		fontName = getParameter("fontName");
		if(fontName == null)
		  fontName = "Not Found";

		param = getParameter("fontSize");
		try 
		{
		  if(param != null) 
			fontSize = Integer.parseInt(param);
		  else
			fontSize = 0;
		} 
		catch(NumberFormatException e) 
		{
		  fontSize = -1;
		}	 

		param = getParameter("accountEnabled");
		if(param != null)
		  active = Boolean.valueOf(param);
  }
  public void paint(Graphics g) 
  {
		g.drawString("Account Active: " + active, 30, 10);
		Font font = new Font(fontName, Font.BOLD, fontSize);
		g.setFont(font);
		g.drawString("Welcome to IT Department", 30, 60);
  }
}