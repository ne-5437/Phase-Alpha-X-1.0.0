// Demonstrate FileDialog box.  
import java.awt.*; 
import java.awt.event.*;  
class FileDialogDemo extends Frame implements ActionListener
{ 
	  private FileDialog fd;
	  public FileDialogDemo( ) 
	  {	
			// create menu bar and add it to frame 
			MenuBar mbar = new MenuBar(); 
			setMenuBar(mbar); 
		 
			// create the menu items 
			Menu file = new Menu("File"); 
			MenuItem item1, item2, item3, item4; 
			file.add(item1 = new MenuItem("Open...")); 
			file.add(item2 = new MenuItem("Close")); 
			mbar.add(file); 		 
		 
			// register event listeners
			item1.addActionListener(this); 
			item2.addActionListener(this); 
	  
		 
			addWindowListener(new WindowAdapter(){
				public void windowClosing(WindowEvent we) 
				{ 
					System.exit(0); //terminates the execution
				} 		
			});
			
			 setTitle("File Dialog Demo");
			 setSize(400, 400); 
			 setLayout(null);
			 setVisible(true);
	  } 	  
	  public void actionPerformed(ActionEvent ae) 
	  { 			
			String arg = ae.getActionCommand(); 

			if(arg.equals("Open..."))
			{
				fd = new FileDialog(this, "File Dialog");  // Activate a FileDialog when Open is selected.  
				fd.setVisible(true);
				String fileName = fd.getFile();				
				System.out.println("File name read is " + fileName);

			}
			else if(arg.equals("Close")) 
				dispose();       	//closes the frame      

	  }	  
	  public static void main(String[] args) 
	  { 
			new FileDialogDemo(); 
	  } 	
} 
 
