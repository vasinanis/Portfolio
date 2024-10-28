

import java.util.ArrayList;
import java.util.List;

public class TaskManager {
    private List<Task> tasks;

    public TaskManager() {
        this.tasks = new ArrayList<>();
    }

    public void addTask(Task task) {
        tasks.add(task);
    }

    public void deleteTask(int taskId) {
        tasks.removeIf(task -> task.getId() == taskId);
    }

    public List<Task> listTasks() {
        return tasks;
    }

    public List<Task> findTasksByCategory(String category) {
        List<Task> categorizedTasks = new ArrayList<>();
        for (Task task : tasks) {
            if (task.getCategory().equalsIgnoreCase(category)) {
                categorizedTasks.add(task);
            }
        }
        return categorizedTasks;
    }

    
}

