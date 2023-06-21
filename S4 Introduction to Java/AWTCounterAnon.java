//Event handling using an anonymous inner class
import java.awt.*;         
import java.awt.event.*;   
 
public class AWTCounterAnon extends Frame 
{
   private Label lblCount;     
   private TextField tfCount;  
   private Button btnCount; 
   int count = 0;      
 
   public AWTCounterAnon () 
   { 
      lblCount = new Label("Counter");  
      add(lblCount);                 
 
      tfCount = new TextField("0", 6); 	 
      tfCount.setEditable(false);       		 
      add(tfCount);                  
 
      btnCount = new Button("Count");    
      add(btnCount);         
 
 
	  btnCount.addActionListener(new ActionListener()
	  {	  
		  public void actionPerformed(ActionEvent evt) 
		  {
			tfCount.setText(++count + "");  
		  }	  
	  });		//Register the Listener with the source
      
	  setTitle("AWT Counter");   
      setSize(300, 300);  
	  setLayout(new FlowLayout());	  
      setVisible(true);       
   }
   public static void main(String[] args)
   {       
      new AWTCounterAnon();
        
   } 
}
 