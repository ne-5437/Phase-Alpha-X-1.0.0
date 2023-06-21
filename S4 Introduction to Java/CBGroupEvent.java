import java.awt.*;
import java.awt.event.*;
public class CBGroupEvent extends Frame implements ItemListener 
{ 
	private String msg = ""; 
	private Checkbox winXP, win7, solaris, mac; 
	private CheckboxGroup cbg; 
	private Label ll;
 
	public CBGroupEvent() 
	{     
		ll = new Label();
		ll.setAlignment(Label.CENTER);  
		ll.setSize(400,100);   
		add(ll);
		
		cbg = new CheckboxGroup(); 
		winXP = new Checkbox("Windows XP", cbg, true); 
		winXP.setBounds(100,100, 100,50);
		win7 = new Checkbox("Windows 7", cbg, false); 
		win7.setBounds(100,150, 100,50);
		solaris = new Checkbox("Solaris", cbg, false); 
		solaris.setBounds(100,200, 100,50);
		mac = new Checkbox("Mac OS", cbg, false); 
		mac.setBounds(100,250, 100,50);
		
		add(winXP); 
		add(win7); 
		add(solaris); 
		add(mac); 
	 
		winXP.addItemListener(this); 
		win7.addItemListener(this); 
		solaris.addItemListener(this); 
		mac.addItemListener(this); 	
		
		setSize(400,400);  
		setLayout(null);  
		setVisible(true);  
	} 
 
	  public void itemStateChanged(ItemEvent ie) 
	  { 
			String msg = "Current selection: "; 
			msg += cbg.getSelectedCheckbox().getLabel(); 
			ll.setText(msg);
	  } 
	 

	  public static void main(String...args)
	  { 
			new CBGroupEvent();
	  } 
}