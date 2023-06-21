import java.awt.*;

public class Cbg extends Frame
{
	public Cbg()
	{	
		CheckboxGroup c = new CheckboxGroup();
		Checkbox c1 = new Checkbox("Apple", c, false);
		Checkbox c2 = new Checkbox("Mange", c, false);
		Checkbox c3 = new Checkbox("Banana", c, false);
		Checkbox c4 = new Checkbox("Grape", c, true);
		
		setLayout(new FlowLayout());
		add(c1);
		add(c2);
		add(c3);
		add(c4);

		setVisible(true);		
	}		
	public static void main(String... args){
		new Cbg();		
	}
}