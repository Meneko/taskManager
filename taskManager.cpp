#include "taskManager.h"
#include <iostream>

struct task
{
    int taskIdentification {};
    std::string taskDescription {};
};

task tasks[10]; // Tenho que aprender structs / arrays

void addTask(int taskIdentification, std::string taskDescription) {
    tasks[taskIdentification].taskIdentification = taskIdentification;
    tasks[taskIdentification].taskDescription = taskDescription;
}

void listTasks(int tasksQuantity)
{
    for (int taskIdentification = 0 ; taskIdentification <= tasksQuantity ; ++taskIdentification)
    {
        std::cout << tasks[taskIdentification].taskIdentification << " " << tasks[taskIdentification].taskDescription << '\n';
    }
}

void removeTask(int taskIdentification, int tasksQuantity)
{
    for (; taskIdentification <= tasksQuantity ; ++taskIdentification)
    {
        tasks[taskIdentification] = tasks[taskIdentification + 1];
        tasks[taskIdentification].taskIdentification = taskIdentification;

        tasks[taskIdentification + 1].taskDescription = "";
    }

}

//void doneTask(int id, std::string task) {}