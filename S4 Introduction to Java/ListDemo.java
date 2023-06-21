import java.awt.*;  
public class ListDemo  
{  
     public ListDemo()
	 {  
        Frame f= new Frame();  
        List l=new List(5,true); // List l=new List(5,true) - will allow multi-select
        l.setBounds(100,100, 75,75);  
        l.add("Hyderbad");  
		l.add("Bangalore");  
		l.add("Mumbai");  
		l.add("Delhi");  
		l.add("Kolkata"); 
        f.add(l);  
        f.setSize(400,400);  
        f.setLayout(new FlowLayout());  
        f.setVisible(true);  
     }  
	public static void main(String args[])  
	{  
	   new ListDemo();  
	}  
} 