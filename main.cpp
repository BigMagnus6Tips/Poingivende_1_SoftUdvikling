#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Task
{
	public:
	std::string _description;
	Task(std::string description){
		_description = description;
	}
};

class TodoList
{
	
	public:
	std::vector<Task> todolist;
	TodoList(){}
	Task getTaskAt(int i)
	{
		return todolist.at(i);
	}
	void removeTask(int i)
	{
		todolist.erase(todolist.begin() + i);
	}
};

int main() {

    TodoList todo = TodoList();

    return 0;
}
