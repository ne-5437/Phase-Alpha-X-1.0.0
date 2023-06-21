import java.awt.*;
import java.awt.event.*;

public class MouseMotionDemo extends Frame 
		implements  MouseListener,MouseMotionListener{
	
	// to display the (x,y) coordinates of the mouse-clicked
	private TextField tfMouseClickX;
	private TextField tfMouseClickY;
	
	// to display the (x,y) coordinates of the current mouse position
	private TextField tfMousePositionX;
	private TextField tfMousePositionY;
	
    // to display the (x,y) coordinates when mouse is dragged
	private TextField tfMouseDragX;
	private TextField tfMouseDragY;
	
	public MouseMotionDemo()
	{
		setLayout(new FlowLayout());
		
		add(new Label("X-Click: "));	
		tfMouseClickX = new TextField(10);
		tfMouseClickX.setEditable(false);		
		add(tfMouseClickX);
		
		add(new Label("Y-Click: "));
		tfMouseClickY = new TextField(10);
		tfMouseClickY.setEditable(false);
		add(tfMouseClickY);

		add(new Label("X-Position: "));
		tfMousePositionX = new TextField(10);
		tfMousePositionX.setEditable(false);
		add(tfMousePositionX);
		
		add(new Label("Y-Position: "));
		tfMousePositionY = new TextField(10);
		tfMousePositionY.setEditable(false);
		add(tfMousePositionY);
		
		add(new Label("x-Position: "));
		tfMouseDragX = new TextField(10);
		tfMouseDragX.setEditable(false);
		add(tfMouseDragX);
		
		add(new Label("y-Position: "));
		tfMouseDragY = new TextField(10);
		tfMouseDragY.setEditable(false);
		add(tfMouseDragY);

		addMouseListener(this);
		addMouseMotionListener(this);

		setTitle("MouseMotion Demo");
		setSize(400,400);
		setVisible(true);
			
	}			
	
	 /** MouseListener handlers */
   // Called back when a mouse-button has been clicked
   @Override
   public void mouseClicked(MouseEvent e) {
      tfMouseClickX.setText(e.getX() + "");
      tfMouseClickY.setText(e.getY() + "");
   }
 
   // Not Used, but need to provide an empty body for compilation

   public void mousePressed(MouseEvent e) { }

   public void mouseReleased(MouseEvent e) { }

   public void mouseEntered(MouseEvent e) { }

   public void mouseExited(MouseEvent e) { }
 
   /** MouseMotionEvent handlers */
   // Called back when the mouse-pointer has been moved
   public void mouseMoved(MouseEvent e) {
      tfMousePositionX.setText(e.getX() + "");
      tfMousePositionY.setText(e.getY() + "");
   }
 
   // Not Used, but need to provide an empty body for compilation
   public void mouseDragged(MouseEvent e) {
	 tfMouseDragX.setText(e.getX() + "");
      tfMouseDragY.setText(e.getY() + "");
   }
	
   public static void main(String[] args){
		new MouseMotionDemo();			   
   }	
}