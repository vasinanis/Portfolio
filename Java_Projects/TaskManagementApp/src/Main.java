import java.time.LocalDate;

public class Main {
	
    public static void main(String[] args) {
    	
        TaskManager taskManager = new TaskManager();

        Task task1 = new Task("Finish project", "Complete the Task Management app", LocalDate.of(2024, 10, 30), "High", "Work");
        
        taskManager.addTask(task1);

        for (Task task : taskManager.listTasks()) {
        	
            System.out.println(task);
        }
    }
}
