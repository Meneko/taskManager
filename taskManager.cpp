#include "taskManager.h"
#include <iostream>

struct task
{
    int taskIdentification {};
    std::string taskDescription {};
    std::string taskState {};
};

task tasks[10]; // Tenho que aprender structs / arrays

void addTask(int taskIdentification, std::string taskDescription) {
    tasks[taskIdentification].taskIdentification = taskIdentification;
    tasks[taskIdentification].taskDescription = taskDescription;
    tasks[taskIdentification].taskState = "not done";
}

void listTasks(int tasksQuantity)
{
    for (int taskIdentification = 0 ; taskIdentification < tasksQuantity ; ++taskIdentification)
    {
        task task = tasks[taskIdentification];
        std::cout << task.taskIdentification << " " << task.taskDescription << " " << task.taskState <<'\n';
    }
}

void removeTask(int taskIdentification, int tasksQuantity)
{
    for (; taskIdentification <= tasksQuantity ; ++taskIdentification)
    {
        tasks[taskIdentification] = tasks[taskIdentification + 1];

        tasks[taskIdentification].taskIdentification = taskIdentification;
        tasks[taskIdentification + 1].taskDescription = "";
        tasks[taskIdentification + 1].taskState = "";
    }

}

void doneTask(int taskIdentification)
{
    tasks[taskIdentification].taskState = "done";
}
