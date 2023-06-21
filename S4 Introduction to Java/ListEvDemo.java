import java.awt.*;  
import java.awt.event.*;  
//Source - button
public class ListEvDemo  extends Frame implements ActionListener
{  
	 private List l1;
	 private List l2;
	 private Label label;
     public ListEvDemo()
	 { 
		label = new Label();          
        label.setAlignment(Label.CENTER);  
        label.setSize(500,100); 
		
        Button b=new Button("Show");  
        b.setBounds(200,150,80,30);  
        
		l1=new List(4, false);  //Single selection
        l1.setBounds(100,100, 70,70);  
        l1.add("C");  
        l1.add("C++");  
        l1.add("Java");  
        l1.add("PHP");  
		
        l2=new List(4, true);  //Multi-Selection
        l2.setBounds(100,200, 70,70);  
        l2.add("Bootstrap");  
        l2.add("Spring");  
        l2.add("Hibernate");  
        l2.add("CodeIgniter"); 
		
        add(l1); add(l2); add(label); add(b);  
        setSize(600,600);  
        setLayout(null);  
        setVisible(true);  
        b.addActionListener(this);   //Register the listener
	}
	 public void actionPerformed(ActionEvent e) 
	 {       
          String data = "Programming languages: "+l1.getItem(l1.getSelectedIndex());  
          data += ",  Frameworks:";  
          for(String frame:l2.getSelectedItems()){  
                   data += frame + " ";  
          }  
          
		  label.setText(data);  
      } 
	  public static void main(String args[])  
	  {  
			new ListEvDemo();  
	  } 
}  
 
 