import java.awt.*; 
import java.awt.event.*; 
 
public class TextFieldDemo extends Frame implements ActionListener 
{  
	private TextField name, pass; 
 
	public TextFieldDemo() 
	{ 
		Label namep = new Label("Name: ");  
		Label passp = new Label("Password: ");  
		name = new TextField(12); 
		pass = new TextField(8); 
		pass.setEchoChar('*'); 
		name.setText("Vasavi");
		name.setEditable(false);
		name.select(0,2); //Selects the first 2 characters of the textfield name
	  
		add(namep); 
		add(name); 
		add(passp); 
		add(pass); 
	 
		name.addActionListener(this); 
		pass.addActionListener(this); 
		setSize(600,600);  
		setLayout(new FlowLayout());  
		setVisible(true);  
	} 
 
	// User hit Enter key on one of the TextFields. 
	public void actionPerformed(ActionEvent ae) 
	{ 
		 System.out.println("Name: " + name.getText());
		 if(ae.getSource()==name)
		 {
			System.out.println("Selected text in name: "  + name.getSelectedText());  
		 }
		 else
		 {     
			System.out.println("Password: " + pass.getText());
		 }
	} 
 
	public static void main(String args[]) { 
     new TextFieldDemo();
	} 
}