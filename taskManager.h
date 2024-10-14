#ifndef IO_H
#define IO_H
#include <iostream>

void addTask(int taskIdentification, std::string taskDescription);

void listTasks();

void removeTask(int taskIdentification);

void doneTask(int taskIdentification);


#endif
