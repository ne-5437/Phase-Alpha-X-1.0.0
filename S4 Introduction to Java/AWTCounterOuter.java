//Event handling using an Outer class
import java.awt.*;         
import java.awt.event.*;   
 
public class AWTCounterOuter extends Frame
{
   Label lblCount;     
   TextField tfCount;   //cannot be private(need to provide a public setter method otherwise)
   Button btnCount;       
 
   public AWTCounterOuter() 
   { 
      lblCount = new Label("Counter");  
      add(lblCount);                 
 
      tfCount = new TextField("0", 6); 	 
      tfCount.setEditable(false);       		 
      add(tfCount);                  
 
      btnCount = new Button("Count");    
      add(btnCount);         
 
	  btnCount.addActionListener(new Outer(this));		//Register the Listener with the source
      
	  setTitle("AWT Counter");   
      setSize(300, 300);  
	  setLayout(new FlowLayout());	  
      setVisible(true);       
   }
   public static void main(String[] args)
   {       
      new AWTCounterOuter();
        
   } 
}

class Outer implements ActionListener
{  
	private AWTCounterOuter obj; 
    private int count = 0;   
	
	public Outer(AWTCounterOuter obj)
	{  
		this.obj=obj;  
	}  
	public void actionPerformed(ActionEvent evt) 
	{
		obj.tfCount.setText(++count + ""); // Convert int to String
   }
}  
    