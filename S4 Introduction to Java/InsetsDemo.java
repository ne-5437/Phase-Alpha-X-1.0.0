// Demonstrate BorderLayout with insets.  
import java.awt.*; 
import java.awt.event.*;  
public class InsetsDemo extends Frame 
{ 
	public InsetsDemo() 
	{ 
		// set background color so insets can be easily seen 
		setBackground(Color.cyan);  
		setLayout(new BorderLayout()); 
 
		add(new Button("This is across the top."),  BorderLayout.NORTH); 
		add(new Button("The footer message might go here."),  BorderLayout.SOUTH); 
		add(new Button("Right"), BorderLayout.EAST); 
		add(new Button("Left"), BorderLayout.WEST); 
 
		String msg = "The reasonable man adapts " + 
		"himself to the world;\n" + 
		"the unreasonable one persists in " + 
		"trying to adapt the world to himself.\n" + 
		"Therefore all progress depends " + 
		"on the unreasonable man.\n\n" + 
		"        - George Bernard Shaw\n\n"; 
 
		add(new TextArea(msg), BorderLayout.CENTER); 
		setTitle("Border Layout Insets Demo"); 
		setSize(500,400);
		setVisible(true);
		
		addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent evt) 
			{
				System.exit(0);  // Terminate the program
			}   
	    }); 
	}
  
	// add insets using getInsets of Container
	public Insets getInsets()  //specifies the space that a container must leave at each of its edges
	{ 
		return new Insets(80, 60, 40, 20); 
	} 
	public static void main(String args[])
	{
		new InsetsDemo();
	}
}