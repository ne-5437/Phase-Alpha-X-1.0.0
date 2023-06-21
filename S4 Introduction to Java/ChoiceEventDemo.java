import java.awt.*;  
import java.awt.event.*;  
//Source - button and choice
public class ChoiceEventDemo extends Frame implements ActionListener, ItemListener
{  
	private Choice c;
	private Label label;
	private Button b;
    public ChoiceEventDemo()
	{ 
        label = new Label();          
        label.setAlignment(Label.CENTER);  
        label.setSize(400,100);  
       
   	    b=new Button("Show");  
        b.setBounds(200,100,50,20);  
        c=new Choice();  
        c.setBounds(100,100, 75,75);  
        c.add("C");  
        c.add("C++");  
        c.add("Java");  
        c.add("PHP");  
        c.add("Android"); 
		
        add(c); add(label); add(b);  
        setSize(400,400);  
        setLayout(null);  
        setVisible(true);  
        b.addActionListener(this);  
		c.addItemListener(this);
    }         
    public void actionPerformed(ActionEvent e) 
	{       
         String data = "Programming language Selected: "+ c.getSelectedItem();    
         label.setText(data);
	}
	public void itemStateChanged(ItemEvent e)
	{
		System.out.println(e.getItem());
		//System.out.println(c.getItem(c.getSelectedIndex())); //This also works
	}
	public static void main(String args[])  
    {  
       new ChoiceEventDemo();  
	}  
}
  