//Event handling using an inner class
import java.awt.*;        
import java.awt.event.*;  
 
public class AWTCounterInner extends Frame 
{
   private Label lblCount;     
   private TextField tfCount;  
   private Button btnCount;    
   private int count = 0;  
   public AWTCounterInner() 
   { 
      lblCount = new Label("Counter");  
      add(lblCount);                 
 
      tfCount = new TextField(count + "", 6); 		
      tfCount.setEditable(false);       			
      add(tfCount);                  
 
      btnCount = new Button("Count");    
      add(btnCount);         
 
	  btnCount.addActionListener(new MyClass());		//Register the Listener with the source
      
	  //Setting Frame properties
	  setTitle("AWT Counter");   
      setSize(300, 300);  
	  setLayout(new FlowLayout());	  
      setVisible(true);       
   }   
   class MyClass implements ActionListener
   {
		public void actionPerformed(ActionEvent evt) 
		{
			++count;  
			tfCount.setText(count + "");  
		}
   } 
   public static void main(String[] args)
   {       
      new AWTCounterInner();       
   } 
}