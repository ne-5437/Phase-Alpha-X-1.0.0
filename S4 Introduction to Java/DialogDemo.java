// Demonstrate Dialog box.  
import java.awt.*; 
import java.awt.event.*; 

// Create a Frame Window 
class DialogDemo extends Frame implements ActionListener
{ 
	  private String msg = "";	
	  private Label ll;	  
	  private MenuItem item1, item2, item3, item4; 
	  public DialogDemo( ) 
	  { 	 
		ll = new Label();
		ll.setAlignment(Label.CENTER);  
		ll.setBounds(150,100,200,100);  
		add(ll);
		
		// create menu bar and add it to frame 
		MenuBar mbar = new MenuBar(); 
		setMenuBar(mbar); 
	 
		// create the menu items 
		Menu file = new Menu("File"); 		
		file.add(item1 = new MenuItem("New...")); 
		file.add(item2 = new MenuItem("Open...")); 
		file.add(item3 = new MenuItem("Close")); 
		mbar.add(file); 		 
	 
		// register event listeners
		item1.addActionListener(this); 
		item2.addActionListener(this); 
		item3.addActionListener(this); 	  
	 
		addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent we) 
			{ 
				dispose();  //System.exit(0) vs dispose()?
			} 		
		});
		
		 setTitle("Menu Demo");
		 setSize(400, 400); 
		 setLayout(null);
         setVisible(true);
	  } 
	  
	  public void actionPerformed(ActionEvent ae) 
	  { 
			msg = "You selected "; 			
			if(ae.getSource()==item1)   // Activate a dialog box when New is selected. 
			{ 
				msg += "New."; 
				SampleDialog d = new SampleDialog(this, "New Dialog Box"); 
				d.setVisible(true); 
			} 
			
			// Try defining other dialog boxes for these options. 
			else if(ae.getSource()==item2) 
				msg += "Open."; 
			else if(ae.getSource()==item3) 
				dispose(); 
            
			ll.setText(msg); 
	  }
	  
	  public static void main(String[] args) 
	  { 
		new DialogDemo(); 
	} 
	
} 

// Create a subclass of Dialog. 
class SampleDialog extends Dialog implements ActionListener 
{ 
    public SampleDialog(Frame parent, String title) 
	{ 
		  super(parent, title, true);  //Dialog(Frame owner, String title, boolean modal)
		  setLayout(new FlowLayout()); 
		  setSize(300, 200); 
	 
		  add(new Label("Press this button:")); 
		  Button b; 
		  add(b = new Button("Cancel")); 
		  b.addActionListener(this); 
		  
		  //To close the Dialog instead of clicking on the button
		  addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent we) 
			{ 
				dispose(); 
			} 		
		});
    }  
    public void actionPerformed(ActionEvent ae) 
	{ 
		dispose(); //closes the Dialog, System.exit(0) will close the entire application
    } 
	
} 
 
