import java.awt.*;  
public class ChoiceDemo  extends Frame
{  
    public ChoiceDemo()
	{   
		Choice c = new Choice();  
		c.setBounds(100,100, 75,75);  
		c.add("Hyderbad");  
		c.add("Bangalore");  
		c.add("Mumbai");  
		c.add("Delhi");  
		c.add("Kolkata");  
		add(c);  
		setSize(400,400);
		setLayout(new FlowLayout());
		setVisible(true);  
    }  
	 public static void main(String args[])  
	 {  
	   new ChoiceDemo();  
	 }  
}  