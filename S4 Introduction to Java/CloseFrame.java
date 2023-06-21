//Handlin Window and Action events
import java.awt.*;  
import java.awt.event.*;  
class CloseFrame extends Frame implements ActionListener, WindowListener 
{  
	private TextField tf;  
	public CloseFrame()
	{  	  
		//create components  
		tf=new TextField();  
		tf.setBounds(60,50,170,20);  
		
		Button b=new Button("click me");  
		b.setBounds(100,120,80,30);  
		  
		//register listener  
		b.addActionListener(this);	//passing current instance 
		addWindowListener(this);
		
		//add components and set size, layout and visibility  
		add(b); add(tf);  
		setSize(300,300);  
		setLayout(null);  
		setVisible(true);  
		
		//dispose();
	} 
    public static void main(String args[])
	{  
		new CloseFrame();  
	} 	
	public void actionPerformed(ActionEvent e)
	{  
		tf.setText("Welcome");  
	}  
	public void windowClosing(WindowEvent evt) 
	{
		System.exit(0);  // Terminate the program
	}
 
   // Not Used, BUT need to provide an empty body to compile.
   public void windowOpened(WindowEvent evt) { }
   public void windowClosed(WindowEvent evt) { }//System.out.println("Window Closed");
   
   // For Debugging
   public void windowIconified(WindowEvent evt) { System.out.println("Window Iconified"); }
   public void windowDeiconified(WindowEvent evt) { System.out.println("Window Deiconified"); }
   public void windowActivated(WindowEvent evt) { System.out.println("Window Activated"); }
   public void windowDeactivated(WindowEvent evt) { System.out.println("Window Deactivated"); }
	 
}  