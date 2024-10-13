#ifndef IO_H
#define IO_H
#include <iostream>

void addTask(int taskIdentification, std::string taskDescription);

void listTasks(int tasksQuantity);

void removeTask(int taskIdentification, int tasksQuantity);

void doneTask(int taskIdentification);


#endif
