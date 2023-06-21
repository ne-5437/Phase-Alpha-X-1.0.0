import java.awt.*; 
import java.awt.event.*; 
 
public class GridLayoutDemo extends Frame 
{ 
	  private static final int n = 4; 
	  private int k=1;
	  GridLayoutDemo() 
	  { 
			setLayout(new GridLayout(n, n)); 
			setFont(new Font("SansSerif", Font.BOLD, 24)); 
			for(int i = 0; i < n; i++) 
			{ 
			  for(int j = 0; j < n; j++) 
			  {         
				  add(new Button("" + k++)); 
			  } 
			}

			setTitle("Grid Layout Demo"); 
			setSize(500,400);
			setVisible(true);
				
			addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent evt) 
				{
					System.exit(0);  // Terminate the program
				}   
			}); 
	  } 
	  public static void main(String args[])
	  {
			new GridLayoutDemo();
	  }
}