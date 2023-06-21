//Multiple Anonymous inner classes extending adapter classes
import java.awt.*;
import java.awt.event.*;
 
public class MouseAdapterAnon extends Frame  
{
   private TextField tfMouseX; // to display mouse-click-x
   private TextField tfMouseY; // to display mouse-click-y
 
 
   public MouseAdapterAnon() 
   {
      setLayout(new FlowLayout()); 
 
      
      add(new Label("X-Click: ")); // Label (anonymous)
      tfMouseX = new TextField(10); // 10 columns
      tfMouseX.setEditable(false);  // read-only
      add(tfMouseX);                 
 
      
      add(new Label("Y-Click: ")); // Label (anonymous) 
      tfMouseY = new TextField(10);
      tfMouseY.setEditable(false);  // read-only
      add(tfMouseY);                
 
      addMouseListener(new MouseAdapter(){
		public void mouseClicked(MouseEvent evt) 
		{
			tfMouseX.setText(evt.getX() + "");
			tfMouseY.setText(evt.getY() + "");
		}	  
	  });   //frame is the source of the event, registering source with listener	  
      
	 
	  addWindowListener(new WindowAdapter(){
		public void windowClosing(WindowEvent evt) 
		{
			System.exit(0);  // Terminate the program
		}		
	  });   //frame is the source of the event, registering source with listener
 
 
	  //Frame properties
      setTitle("MouseEvent Demo");  
      setSize(350, 350);            
      setVisible(true);            
   }
 
   public static void main(String[] args) 
   {
      new MouseAdapterAnon();   
   }
 }