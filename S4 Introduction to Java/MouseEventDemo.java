import java.awt.*;
import java.awt.event.*;
 
public class MouseEventDemo extends Frame implements MouseListener 
{
   private TextField tfMouseX; // to display mouse-click-x
   private TextField tfMouseY; // to display mouse-click-y 
 
   public MouseEventDemo() 
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
 
      addMouseListener(this);   //frame is the source of the event, registering source with listener	  
 
	  //Frame properties
      setTitle("MouseEvent Demo");  
      setSize(350, 350);            
      setVisible(true);            
   }
 
   public static void main(String[] args) 
   {
      new MouseEventDemo();   
   }
 
   /* MouseEvent handlers */
   // Called back upon mouse clicked
   public void mouseClicked(MouseEvent evt) 
   {
      tfMouseX.setText(evt.getX() + "");
      tfMouseY.setText(evt.getY() + "");
   }
 
   // Not used - need to provide an empty body to compile.
	public void mousePressed(MouseEvent evt) { }
    public void mouseReleased(MouseEvent evt) { }
    public void mouseEntered(MouseEvent evt) { }
    public void mouseExited(MouseEvent evt) { }
}