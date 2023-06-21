import java.awt.*;
import java.awt.event.*;
public class AWTGraphics extends Frame 
{   
	public AWTGraphics()
	{
		super("Java AWT Graphics Demo");
		prepareGUI();
	}

    private void prepareGUI()
	{
		setSize(600,500);
		addWindowListener(new WindowAdapter() {
				public void windowClosing(WindowEvent windowEvent){
				System.exit(0);
			}        
		}); 
    }
   
	public void paint(Graphics g) 
	{
		  g.setColor(Color.BLUE);
		  Font font = new Font("Serif", Font.PLAIN, 26);
		  g.setFont(font);
		  g.drawString("Welcome to Graphics Demo", 50, 100);  //String str, int x, int y 
		  g.setColor(new Color(125,155,200));
		  g.fillOval(55,155, 200, 220);    //x, y, width, height
		  g.setColor(Color.GREEN);
		  g.drawOval(355,155, 200, 220); 
		  
	}  
  
	public static void main(String[] args)
	{
		AWTGraphics awtGraphics = new AWTGraphics();  
		awtGraphics.setVisible(true);
	}  
}