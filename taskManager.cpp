#include "taskManager.h"
#include <iostream>

struct taskType
{
    int identification {};
    std::string description {};
    std::string state {};
};

taskType tasks[100];

void addTask(int taskIdentification, std::string taskDescription) {
    tasks[taskIdentification] = {taskIdentification, taskDescription, "not done"};

    std::cout << "Task added succesfully!\n";
}

void listTasks()
{
    for (int taskIdentification = 0 ; taskIdentification <= sizeof(tasks) ; ++taskIdentification)
    {
        taskType task = tasks[taskIdentification];

        if (!tasks[taskIdentification].description.empty())
        {
            std::cout << task.identification << " " << task.description << " " << task.state;
        }
    }
}

void removeTask(int taskIdentification)
{
    if (!tasks[taskIdentification].description.empty())
    {
        std::cout << "Task not found!\n";
    }

    tasks[taskIdentification] = {0, "", ""};

    std::cout << "Task removed succesfully!\n";
}

void doneTask(int taskIdentification)
{
    tasks[taskIdentification].state = "done";
}
