    #include "taskManager.h"

    int main()
    {
        std::cout << "This is a task manager =)" << '\n';
        std::cout << "Enter the quantity of tasks:" << '\n';

        int tasksQuantity {};
        std::cin >> tasksQuantity;

        tasksQuantity -= 1;
        std::cin.ignore();

        for (int taskIdentification {} ; taskIdentification <= tasksQuantity ; taskIdentification++)
        {
            std::cout << "Enter the task number " << taskIdentification << '/' << tasksQuantity << ':' <<'\n';
            std::string taskDescription {};
            std::getline(std::cin, taskDescription);
            addTask(taskIdentification, taskDescription);
        }

        int exit {false};

        while (!exit)
        {
            std::cout << "\nDone! options(add a task: 1, list the tasks: 2, remove a task: 3, exit: 0)";
            int option {};
            std::cin >> option;
            std::cin.ignore();

            switch (option){
                case 1:
                {
                    tasksQuantity += 1;
                    std::cout << "Enter the task number " << tasksQuantity << ":" << '\n';

                    std::string taskDescription {};
                    std::getline(std::cin, taskDescription);
                    addTask(tasksQuantity, taskDescription);
                    break;
                }
                case 2:
                {
                    listTasks(tasksQuantity);
                    break;
                }
                case 3:
                {
                    std::cout << "Enter the task number:" << '\n';

                    int taskIdentification {};
                    std::cin >> taskIdentification;
                    removeTask(taskIdentification, tasksQuantity);
                    taskIdentification -= 1;
                    break;
                }
                case 0:
                {
                    exit = true;
                    break;
                }
                default:
                {
                    std::cout << "U didn't choose a existent option, please try again!";
                    break;
                }
            }
        }
    }

