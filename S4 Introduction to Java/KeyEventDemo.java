import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

// An AWT GUI program inherits from the top-level container java.awt.Frame
public class KeyEventDemo extends Frame implements KeyListener
{	
	private TextField tfInput;	// single-line TextField to receive tfInput key
	private TextArea taDisplay;	// multi-line TextArea to taDisplay result	
 
	public KeyEventDemo()
	{
		add(new Label("Enter Text: ")); //anonymous label
		tfInput = new TextField(10);
		add(tfInput);
		
		taDisplay = new TextArea(5, 40); // 5 rows 40 columns
		add(taDisplay);

		// TextField fires KeyEvent to its registered KeyListeners, adds "this" object as KeyEvent listener
		tfInput.addKeyListener(this);		

		setTitle("KeyEvent Demo"); 
		setSize(400, 400);			 
		setLayout(new FlowLayout());
		setVisible(true);			// super frame shows
			
	}
	
	/* KeyEvent handlers*/
	// called back when a key has been typed (pressed and released)	
	public void keyTyped(KeyEvent e)
	{
		taDisplay.append("You have typed " + e.getKeyChar() + "\n");		
	}		

	//Not Used, but need to provide an empty body for compilation
	public void keyPressed(KeyEvent e){}
	public void keyReleased(KeyEvent e){}  

	public static void main(String... args)
	{
		new KeyEventDemo();		
	}		
}