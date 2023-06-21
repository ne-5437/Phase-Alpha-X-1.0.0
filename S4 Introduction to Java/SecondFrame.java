import java.awt.*;  
public class SecondFrame
{  
	public SecondFrame()
	{  
		Frame f = new Frame("My New Frame");  
		Button b = new Button("click me");  
		b.setBounds(30,50,80,30);  
		f.add(b);  
		f.setSize(300,300);  
		f.setLayout(null);  
		f.setVisible(true);  
	}  
	public static void main(String args[])
	{  
		SecondFrame f = new SecondFrame();  
	}
}  