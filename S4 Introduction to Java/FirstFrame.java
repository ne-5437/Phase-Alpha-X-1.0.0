import java.awt.*;  
public class FirstFrame extends Frame
{  
	public FirstFrame()
	{  
		Button b = new Button("click me");  
		b.setBounds(250,100,80,100);	// setting button position  //setBounds(int xaxis, int yaxis, int width, int height) 
		add(b);				//adding button into frame  
		setSize(600,400);	//frame size 300 width and 300 height  
		setLayout(null);	//no layout manager  
		setVisible(true);	//now frame will be visible, by default it is not visible  
	}  
	public static void main(String args[])
	{  
		FirstFrame f = new FirstFrame();  
		f.setTitle("New Frame");
	}
}  