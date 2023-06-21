import java.awt.*;
import java.awt.event.*;
 
public class HandleCheckboxEvent extends Frame implements ItemListener
{
 
	private Checkbox java = null;
	private Checkbox vb = null;
	private Checkbox c = null;
	
	public HandleCheckboxEvent()
    {
		java = new Checkbox("Java");
		vb = new Checkbox("Visual Basic");
		c = new Checkbox("C");
		
		add(java);
		add(vb);
		add(c);

		java.addItemListener(this);
		vb.addItemListener(this);
		c.addItemListener(this);

        setSize(400,400);    
        setLayout(new FlowLayout());    
        setVisible(true);                
	}	
	public static void main(String args[])    
	{    
    		new HandleCheckboxEvent();    
	}	
	public void itemStateChanged(ItemEvent ie) 
    {
		System.out.println("\nJava: " + java.getState());
		System.out.println("VB: " + vb.getState());
		System.out.println("C: " + c.getState());		
	}
}