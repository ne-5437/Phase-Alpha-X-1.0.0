import java.awt.*; 
import java.awt.event.*; 
class MenuDemo extends Frame implements ActionListener
{ 
	  private String msg = ""; 
	  private CheckboxMenuItem debug, test; 
	  private Label ll;
	  public MenuDemo() 
	  { 
			ll = new Label();
			ll.setAlignment(Label.CENTER);  
			ll.setBounds(100,150,200,100); 
			add(ll);
		 
			// create menu bar and add it to frame 
			MenuBar mbar = new MenuBar(); 
			setMenuBar(mbar); 
		 
			// create the menu items and add it to Menu
			Menu file = new Menu("File"); 
			MenuItem item1, item2, item3, item4, item5; 
			file.add(item1 = new MenuItem("New...")); 
			file.add(item2 = new MenuItem("Open...")); 
			file.add(item3 = new MenuItem("Close")); 
			file.add(item4 = new MenuItem("-")); 
			file.add(item5 = new MenuItem("Quit...")); 
			mbar.add(file);   //Adding Menu to MenuBar
		 
			Menu edit = new Menu("Edit"); 
			MenuItem item6, item7, item8, item9; 
			edit.add(item6 = new MenuItem("Cut")); 
			edit.add(item7 = new MenuItem("Copy")); 
			edit.add(item8 = new MenuItem("Paste")); 
			edit.add(item9 = new MenuItem("-")); 
		 
			Menu sub = new Menu("Special"); 
			MenuItem item10, item11, item12; 
			sub.add(item10 = new MenuItem("First")); 
			sub.add(item11 = new MenuItem("Second")); 
			sub.add(item12 = new MenuItem("Third")); 
			edit.add(sub);  //Adding Menu to Menu (sub menu)
		 
			// these are checkable menu items 			
			debug = new CheckboxMenuItem("Debug"); 
			edit.add(debug); 
			test = new CheckboxMenuItem("Testing"); 
			edit.add(test); 
		 
			mbar.add(edit);  //Adding Menu to MenuBar
			
			// register listeners
			item1.addActionListener(this); 
			item2.addActionListener(this); 
			item3.addActionListener(this); 
			item4.addActionListener(this); 
			item5.addActionListener(this); 
			item6.addActionListener(this); 
			item7.addActionListener(this); 
			item8.addActionListener(this); 
			item9.addActionListener(this); 
			item10.addActionListener(this); 
			item11.addActionListener(this); 
			item12.addActionListener(this); 
			
			//Anonymous inner class which implements ItemListener to handle the Item Event: itemStateChanged on debug
			debug.addItemListener(new ItemListener(){
				public void itemStateChanged(ItemEvent ie) 
				{ 
					if(debug.getState()) 
						ll.setText("Debug is on");  
					else 
						ll.setText("Debug is off");
				}		
			}); 
			
			//Anonymous inner class which implements ItemListener to handle the Item Event: itemStateChanged on test
			test.addItemListener(new ItemListener(){
				public void itemStateChanged(ItemEvent ie) 
				{ 
					if(test.getState()) 
						ll.setText("Test is on");  
					else 
						ll.setText("Test is off");
				}		
			});		
		 
			
			 // Anonymous inner class which extends WindowAdaptor to handle the Window event: windowClosing  
			addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent we) 
				{ 
					//System.exit(0);
					dispose();					
				} 
			}); 
			
			//Frame properties
			setTitle("Menu Demo"); 
			setSize(400, 400); 
			setLayout(null);
			setVisible(true);	
			
	  }   
	  
	  public void actionPerformed(ActionEvent ae) 
	  { 
		  msg = "You Selected: "; 
		  String arg = ae.getActionCommand(); 
		  if(arg.equals("New...")) 
			msg += "New."; 
		  else if(arg.equals("Open...")) 
			msg += "Open."; 
		  else if(arg.equals("Close")) 
			msg += "Close."; 
		  else if(arg.equals("Quit...")) 
			msg += "Quit."; 
		  else if(arg.equals("Edit")) 
			msg += "Edit."; 
		  else if(arg.equals("Cut")) 
			msg += "Cut."; 
		  else if(arg.equals("Copy")) 
			msg += "Copy."; 
		  else if(arg.equals("Paste")) 
			msg += "Paste."; 
		  else if(arg.equals("First")) 
			msg += "First."; 
		  else if(arg.equals("Second")) 
			msg += "Second."; 
		  else if(arg.equals("Third")) 
			msg += "Third."; 
		  else if(arg.equals("Debug")) 
			msg += "Debug."; 
		  else if(arg.equals("Testing")) 
			msg += "Testing."; 
		  ll.setText(msg);
	  } 

	  public static void main(String ... args)
	  {
			new MenuDemo();
	  
	  }
} 
 

 