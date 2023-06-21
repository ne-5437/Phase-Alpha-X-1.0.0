import java.awt.*;    
public class CheckboxGroupDemo extends Frame  
{    
    public CheckboxGroupDemo(String name)
	{   
		super(name);
        CheckboxGroup cbg = new CheckboxGroup();  
        Checkbox checkBox1 = new Checkbox("C++", cbg, false);    
        checkBox1.setBounds(100,100, 50,50);    
        Checkbox checkBox2 = new Checkbox("Java", cbg, true);    
        checkBox2.setBounds(100,150, 50,50);   
		Checkbox checkBox3 = new Checkbox("C", cbg, false);
		checkBox3.setBounds(100,200, 50,50);  		
        add(checkBox1);    
		add(checkBox2); 
		add(checkBox3);		
        setSize(400,400);    
        setLayout(null);    
        setVisible(true);    
    }    
	public static void main(String args[])    
	{    
		new CheckboxGroupDemo("Radio Demo");    
	}    
}  