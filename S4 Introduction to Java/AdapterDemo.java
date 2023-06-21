//Demonstrate using Adapter
import java.awt.*;  
import java.awt.event.*;  
class AdapterDemo extends WindowAdapter implements ActionListener
{  
	private TextField tf;  
	public AdapterDemo()
	{  	  
	    Frame f = new Frame();
		//create components  
		tf=new TextField();  
		tf.setBounds(60,50,170,20);  
		
		Button b=new Button("click me");  
		b.setBounds(100,120,80,30);  
		  
		//register listener  
		b.addActionListener(this);	//passing current instance 
		f.addWindowListener(this);
		
		//add components and set size, layout and visibility  
		f.add(b); f.add(tf);  
		f.setSize(300,300);  
		f.setLayout(null);  
		f.setVisible(true);  
	} 
    public static void main(String args[])
	{  
		new AdapterDemo();  
	} 	
	public void actionPerformed(ActionEvent e)
	{  
		tf.setText("Welcome");  
	}  
	public void windowClosing(WindowEvent evt) 
	{
		System.exit(0);  // Terminate the program
	} 
}  