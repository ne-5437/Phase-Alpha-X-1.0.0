import java.awt.*;
import java.applet.*;
import java.net.*;
/*<applet code="Bases" width=300 height=200></applet>*/
public class Bases extends Applet
{
  public void paint(Graphics g)
  {
     String msg;
	 URL url=getCodeBase();
	 msg="codebase :"+url.toString();
	 g.drawString(msg,10,20);
	 
	 url=getDocumentBase();
	 msg="Documentbase :"+url.toString();
	 g.drawString(msg,10,40);
  }
}  
	 