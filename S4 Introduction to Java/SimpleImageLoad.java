/*
 * <applet code="SimpleImageLoad" width=500 height=500>
 * <param name="img" value="Diagram1.jpeg">
 * </applet>
 */
import java.awt.*;
import java.applet.*;

public class SimpleImageLoad extends Applet
{
  Image img;

  public void init() 
  {
    img = getImage(getDocumentBase(), getParameter("img")); //public Image getImage(URL u, String image)
  }

  public void paint(Graphics g) 
  {
    g.drawImage(img, 0, 0, this);
  }
}

/*
The following call to getImage() retrieves the file at that specific URL:
Image img = getImage(new URL("http://www.server.com/files/image.gif"));

In the following form of getImage, the image.gif file is in the same directory as the HTML files that refer to this applet:
Image img = getImage(getDocumentBase(), "image.gif")

In this similar form, the file image.gif is in the same directory as the applet itself:
Image img = getImage(getCodeBase(), "image.gif")
*/