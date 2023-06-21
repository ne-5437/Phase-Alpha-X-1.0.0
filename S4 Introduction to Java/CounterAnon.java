import java.awt.*;         
import java.awt.event.*; 
import java.applet.*;  
/* <applet code="CounterAnon" width=350 height=200> </applet> */
public class CounterAnon extends Applet 
{
   Label lblCount;     
   TextField tfCount;  
   Button btnCount; 
   int count = 0;       
   public void init () 
   { 
	   Frame title = (Frame)this.getParent().getParent();
	   title.setTitle("Counter");
	  
      lblCount = new Label("Counter");  
      add(lblCount);                 
 
      tfCount = new TextField("0", 6); 	 
      tfCount.setEditable(false);       		 
      add(tfCount);                  
 
      btnCount = new Button("Count");    
      add(btnCount); 
 
	   btnCount.addActionListener(new ActionListener(){	  
		  public void actionPerformed(ActionEvent evt) 
		  {
			tfCount.setText(++count + "");  
		  }	  
	  });		//Register the Listener with the source     
       
   }
}