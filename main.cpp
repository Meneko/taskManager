#include "taskManager.h"

int main()
{
    std::cout << "This is a task manager made in CPP" << '\n';

    int taskTracker {0};

    while (true)
    {
        std::cout << "\nType \'add\' to add a task, \'remove\' to remove a task, \'done\' to mark a task and \'exit\' to exit\n";
        std::string option {};
        std::cin >> option;
        std::cin.ignore();

        if (option == "exit")
        {
            std::cout << "\nExiting...";
            return 0;
        }
        else if (option == "add")
        {
            std::cout << "Enter the task content: ";

            std::string taskDescription {};
            std::getline(std::cin, taskDescription);
            addTask(taskTracker, taskDescription);
            taskTracker++;
        }
        else if (option == "remove")
        {
            std::cout << "Enter the task id to remove: " << '\n';

            int taskIdentification {};
            std::cin >> taskIdentification;
            removeTask(taskIdentification);
        }
        else if (option == "done")
        {
            std::cout << "Enter the task id to mark as done: " << '\n';

            int taskIdentification {};
            std::cin >> taskIdentification;
            doneTask(taskIdentification);
        }
        else
        {
            std::cout << "Invalid option, please try again!";
        }
        listTasks();
    }
}

