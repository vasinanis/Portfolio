import java.time.LocalDate;

public class Task {
	
    private static int idCounter = 0;
    private int id;
    private String title;
    private String description;
    private LocalDate deadline;
    private String priority;
    private String category;
    private boolean completed;

    public Task(String title, String description, LocalDate deadline, String priority, String category) {
    	
        this.id = ++idCounter;
        this.title = title;
        this.description = description;
        this.deadline = deadline;
        this.priority = priority;
        this.category = category;
        this.completed = false;
    }

    public void markAsCompleted() {
    	
        this.completed = true;
    }

   
    public String toString() {
    	
        return "Task{" +
                "id=" + id +
                ", title='" + title + '\'' +
                ", description='" + description + '\'' +
                ", deadline=" + deadline +
                ", priority='" + priority + '\'' +
                ", category='" + category + '\'' +
                ", completed=" + completed +
                '}';
    }

    public int getId() {
        return id;
    }

    public String getTitle() {
        return title;
    }

    public String getDescription() {
        return description;
    }

    public LocalDate getDeadline() {
        return deadline;
    }

    public String getPriority() {
        return priority;
    }

    public String getCategory() {
        return category;
    }

    public boolean isCompleted() {
        return completed;
    }

    
    public void setTitle(String title) {
        this.title = title;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public void setDeadline(LocalDate deadline) {
        this.deadline = deadline;
    }

    public void setPriority(String priority) {
        this.priority = priority;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public void setCompleted(boolean completed) {
        this.completed = completed;
    }
}
