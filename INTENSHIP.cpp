#include <iostream>
#include <vector>
#include <string>

// A class representing a task with a description and a completed status
class Task
{
public:
    Task(const std::string &description) : description(description), completed(false) {}

    void markCompleted()
    {
        completed = true;
    }

    bool isCompleted() const
    {
        return completed;
    }

    const std::string &getDescription() const
    {
        return description;
    }

private:
    std::string description;
    bool completed;
};

int main()
{
    // A list of tasks
    std::vector<Task> taskList;

    // The user's choice
    int userChoice;

    // Prompt the user for input until they choose to exit
    do
    {
        std::cout << "1. Add task\n2. Mark task as completed\n3. View tasks\n4. Exit\n";
        std::cin >> userChoice;

        switch (userChoice)
        {
        case 1:
        {
            std::string description;
            std::cout << "Enter task description: ";
            std::cin.ignore();
            std::getline(std::cin, description);
            taskList.push_back(Task(description));
            break;
        }
        case 2:
        {
            int index;
            std::cout << "Enter task index: ";
            std::cin >> index;
            if (index >= 0 && index < taskList.size())
            {
                taskList[index].markCompleted();
            }
            else
            {
                std::cout << "Invalid task index.\n";
            }
            break;
        }
        case 3:
        {
            std::cout << "Current tasks:\n";
            for (const Task &task : taskList)
            {
                std::cout << std::to_string(&task - &taskList[0] + 1) << ". " << task.getDescription();
                if (task.isCompleted())
                {
                    std::cout << " (completed)\n";
                }
                else
                {
                    std::cout << "\n";
                }
            }
            break;
        }
        case 4:
            return 0;
        default:
            std::cout << "Invalid choice.\n";
        }
    } while (true);

    return 0;
}
