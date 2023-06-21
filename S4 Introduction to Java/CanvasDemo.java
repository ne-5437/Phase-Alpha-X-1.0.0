import java.awt.*;
import java.awt.event.*;

public class CanvasDemo extends Frame
{
	private class MyCanvas extends Canvas //inner class
	{	
		public void paint(Graphics g)
		{
			setBackground(Color.PINK);		
			g.setColor(Color.BLUE);
			g.drawLine(30,40,100,200);
			g.drawOval(150,180,10, 10);
		}
			
	}	
	public CanvasDemo()
	{
		Canvas canvas = new MyCanvas();
		Dimension d = new Dimension(600, 300);
		canvas.setPreferredSize(d);	
		
		//Set the canvas to the frame
		add(canvas);
		setTitle("Canvas...");
		setLayout(new FlowLayout(FlowLayout.LEFT));
		setSize(660,500);
		setVisible(true);	
		
		Button close = new Button("Close");
		add(close);
		close.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent ex)
			{
				dispose();
			}
		});
		
		addWindowListener(new WindowAdapter() {
         public void windowClosing(WindowEvent windowEvent){
            System.exit(0);
         }        
      });

	}
		
	public static void main(String... args)
	{
		new CanvasDemo();		
	}		
}