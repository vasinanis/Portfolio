import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class MyFrame extends JFrame {

    private JPanel panel;
    private JTextField titleField;
    private JTextField descriptionField;
    private JTextField deadlineField; 
    private JTextField priorityField;
    private JTextField categoryField;
    private JButton addButton;
    private DefaultListModel<String> taskListModel;
    private JList<String> taskList;

    private TaskManager taskManager; 

    public MyFrame() {
        
        taskManager = new TaskManager();

        
        panel = new JPanel();
        panel.setLayout(new GridLayout(8, 2, 5, 5));

        titleField = new JTextField();
        descriptionField = new JTextField();
        deadlineField = new JTextField();
        priorityField = new JTextField();
        categoryField = new JTextField();

        addButton = new JButton("Add Task");

        
        taskListModel = new DefaultListModel<>();
        taskList = new JList<>(taskListModel);

        
        panel.add(new JLabel("Title:"));
        panel.add(titleField);

        panel.add(new JLabel("Description:"));
        panel.add(descriptionField);

        panel.add(new JLabel("Deadline (YYYY-MM-DD):"));
        panel.add(deadlineField);

        panel.add(new JLabel("Priority:"));
        panel.add(priorityField);

        panel.add(new JLabel("Category:"));
        panel.add(categoryField);

        panel.add(addButton);
        panel.add(new JScrollPane(taskList));

        this.setContentPane(panel);

        
        this.setTitle("Task Management App");
        this.setSize(400, 400);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);

       
        addButton.addActionListener(new ActionListener() {
            
            public void actionPerformed(ActionEvent e) {
                addTask();
            }
        });
    }

    private void addTask() {
        
        String title = titleField.getText();
        String description = descriptionField.getText();
        LocalDate deadline;
        try {
            deadline = LocalDate.parse(deadlineField.getText());
        } catch (Exception e) {
            JOptionPane.showMessageDialog(this, "Please enter a valid date (YYYY-MM-DD).");
            return;
        }
        String priority = priorityField.getText();
        String category = categoryField.getText();

        
        Task task = new Task(title, description, deadline, priority, category);
        taskManager.addTask(task);

        
        taskListModel.addElement(task.toString());

        
        titleField.setText("");
        descriptionField.setText("");
        deadlineField.setText("");
        priorityField.setText("");
        categoryField.setText("");
    }

    
}

