import java.awt.*; 
import java.awt.event.*; 
 
public class CardLayoutDemo extends Frame implements ActionListener
{  
	  private Checkbox winXP, win7, solaris, mac;
	  private Button Win, Other;   
	  private Panel osCards; 
	  private Panel winPan, otherPan;
	  private CardLayout cardLO; 
	  
	 
	  public CardLayoutDemo() 
	  { 
		 Win = new Button("Windows"); 
		 Other = new Button("Other"); 
		 add(Win); 					//Adding buttons to frame
		 add(Other); 
	 
		 cardLO = new CardLayout(); 
		 osCards = new Panel(); 
		 osCards.setLayout(cardLO); // set panel's layout to card layout 
	 
		 winXP = new Checkbox("Windows XP", null, false); 
		 win7 = new Checkbox("Windows 7"); 
		 solaris = new Checkbox("Solaris"); 
		 mac = new Checkbox("Mac OS"); 
	 
		 // add Windows check boxes to a panel called winPan
		 winPan = new Panel(); 
		 winPan.add(winXP); 
		 winPan.add(win7); 
	 
		 // Add other OS check boxes to a panel called otherPan
		 otherPan = new Panel(); 
		 otherPan.add(solaris); 
		 otherPan.add(mac); 
	 
		 // add these two panels to another panel called osCards (card deck)
		 osCards.add(winPan, "Windows"); 
		 osCards.add(otherPan, "Other"); 
	 
		 // add cards panel to main frame  
		 add(osCards); 
	 
		 // register listeners to receive action events on buttons
		 Win.addActionListener(this); 
		 Other.addActionListener(this); 
	 
		 // register mouse events to the frame
		 addMouseListener(new MyMouseAdapter());   //inner class MyMouseAdapter handles the event
		 
		 setTitle("Card Layout Demo"); 
		 setSize(300,300);
		 setLayout(new FlowLayout());
	     setVisible(true);
		 
		
		 addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent evt) 
			{
				System.exit(0);  // Terminate the program
			}   
	    }); 
	  } 
	 
	  // Cycle through panels. 
	  class MyMouseAdapter extends MouseAdapter
	  {
			public void mousePressed(MouseEvent me)
			{ 
					cardLO.next(osCards); 
			} 
	  }
	 
	  
	  public void actionPerformed(ActionEvent ae) 
	  { 
			if(ae.getSource() == Win) 
			{ 		 
			  cardLO.show(osCards, "Windows"); 
			} 
			else 
			{ 
			  cardLO.show(osCards, "Other"); 
			} 
	  }
	  public static void main(String args[])
	  {
			new CardLayoutDemo();
	  }	  
  
}