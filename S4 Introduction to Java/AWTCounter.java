//Event handling in same class
import java.awt.*;        // Using AWT container and component classes
import java.awt.event.*;  // Using AWT event classes and listener interfaces
 
public class AWTCounter extends Frame implements ActionListener
{
   private Label lblCount;     
   private TextField tfCount;  
   private Button btnCount;    
   private int count = 0;      
 
   // Constructor to setup GUI components and event handlers
   public AWTCounter () 
   { 
      lblCount = new Label("Counter");  
      add(lblCount);                 
 
      tfCount = new TextField(count + "", 6); 	// construct the TextField component with initial text
      tfCount.setEditable(false);       		// set to read-only
      add(tfCount);                  
 
      btnCount = new Button("Count");    
      add(btnCount);         
 
	  btnCount.addActionListener(this);		//Register the Listener with the source
      
	  //Setting Frame properties
	  setTitle("AWT Counter");   
      setSize(300, 300);  
	  setLayout(new FlowLayout());	  
      setVisible(true);       
   }
    public void actionPerformed(ActionEvent evt) 
	{
		++count; // Increase the counter value
		tfCount.setText(count + ""); // Convert int to String
   }
  
   public static void main(String[] args)
   {       
      new AWTCounter();
        
   } 
}