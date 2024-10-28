import javax.swing.*;
public class MyFrame extends JFrame {

private JPanel panel;
private JTextField textField;
private JButton button;
	
	
public MyFrame() {
	
	panel=new JPanel();
	textField=new JTextField();
	button=new JButton("Press me");
	
	panel.add(textField);
	panel.add(button);
	
	this.setContentPane(panel);
	
	
	
	
	
	
	this.setVisible(true);
	this.setSize(400,400);
	this.setTitle("My first impressive frame");
	this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
}
	
	

}
