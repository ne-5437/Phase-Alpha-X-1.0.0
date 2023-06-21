//Multiple anonymous inner classes implementing Listener interfaces
import java.awt.*;    
import java.awt.event.*;  
public class CheckboxGroupEvent extends Frame
{    
     public CheckboxGroupEvent()
	 {    
        Label label = new Label();          
        label.setAlignment(Label.CENTER);  
        label.setSize(400,100); 
		
        CheckboxGroup cbg = new CheckboxGroup();  
        Checkbox checkBox1 = new Checkbox("C++", cbg, false);    
        checkBox1.setBounds(100,100, 50,50);    
		
        Checkbox checkBox2 = new Checkbox("Java", cbg, false);    
        checkBox2.setBounds(100,150, 50,50);    
		
		setTitle("CheckboxGroup Example"); 
        add(checkBox1); add(checkBox2); add(label);    
        setSize(400,400);    
        setLayout(null);    
        setVisible(true);   
		
        checkBox1.addItemListener(new ItemListener() {  
            public void itemStateChanged(ItemEvent e) 
			{               
               label.setText("C++ checkbox: Checked");  
            }  
         });  
        checkBox2.addItemListener(new ItemListener() {  
            public void itemStateChanged(ItemEvent e) 
			{               
               label.setText("Java checkbox: Checked");  
            }  
         });  
     }    
	public static void main(String args[])    
	{    
		new CheckboxGroupEvent();    
	}    
}  