import java.awt.*;         
import java.awt.event.*; 
import java.applet.*;  
/* <applet code="Accumulator" width=200 height=200> </applet> */  
public class Accumulator extends Applet implements ActionListener 
{
   private Label lblInput;      
   private Label lblOutput;     
   private TextField tfInput;   
   private TextField tfOutput;  
   private int sum = 0;      
   public void init() 
   {
      lblInput = new Label("Enter an Integer: ");  
      add(lblInput);               				  
 
      tfInput = new TextField(10);  
      add(tfInput);                
 
      tfInput.addActionListener(this);	//Register the listener to the source
          
      lblOutput = new Label("The Accumulated Sum is: ");  
      add(lblOutput);                
 
      tfOutput = new TextField(10);  
      tfOutput.setEditable(false);  // set TextField to read-only
      add(tfOutput);    
	  
   } 
   // ActionEvent handler - Called back upon hitting "enter" key on TextField
   public void actionPerformed(ActionEvent evt) 
   {
      // Get the String entered into the TextField tfInput, convert to int
      int numberIn = Integer.parseInt(tfInput.getText());
      sum += numberIn;      		// Accumulate numbers entered into sum
      tfInput.setText("");  		// Clear input TextField
      tfOutput.setText(sum + "");   // Display sum on the output TextField, convert int to String
                                  
   } 
}