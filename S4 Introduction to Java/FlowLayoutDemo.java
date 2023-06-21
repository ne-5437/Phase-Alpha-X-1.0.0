// Use left-aligned flow layout.  
import java.awt.*; 
import java.awt.event.*; 
 
public class FlowLayoutDemo extends Frame implements ItemListener 
{ 
 
	  private String msg = ""; 
	  private Checkbox winXP, win7, solaris, mac; 
	 
	  public FlowLayoutDemo() 
	  { 
		// set left-aligned flow layout 
		setLayout(new FlowLayout(FlowLayout.LEFT));  //RIGHT, CENTER
		winXP = new Checkbox("Windows XP", null, true); 
		win7 = new Checkbox("Windows 7"); 
		solaris = new Checkbox("Solaris"); 
		mac = new Checkbox("Mac OS"); 
	 
		add(winXP); 
		add(win7); 
		add(solaris); 
		add(mac); 
	 
		// register to receive item events 
		winXP.addItemListener(this); 
		win7.addItemListener(this); 
		solaris.addItemListener(this); 
		mac.addItemListener(this); 		
		
		setTitle("Flow Layout Demo"); 
		setSize(500,400);
		setVisible(true);
		
		addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent evt) 
			{
				System.exit(0);  // Terminate the program
			}   
	    }); 
	  }

      public void itemStateChanged(ItemEvent ie) 
	  { 
			msg = "Current state: "; 
			System.out.println(msg); 
			msg = "  Windows XP: " + winXP.getState(); 
			System.out.println(msg); 
			msg = "  Windows 7: " + win7.getState(); 
			System.out.println(msg); 
			msg = "  Solaris: " + solaris.getState(); 
			System.out.println(msg); 
			msg = "  Mac: " + mac.getState(); 
			System.out.println(msg);  
	  }	  
	  
	  public static void main(String args[])
	  {
			new FlowLayoutDemo();
	  } 
}