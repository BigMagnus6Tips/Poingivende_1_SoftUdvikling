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
	std::string getDescription()
	{
		return _description;
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

  void addTask(Task task)
  {
		todolist.push_back(task);

	}
};

int main() {

    TodoList todo = TodoList();
	Task task1 = Task("Get groceries");
	todo.addTask(task1);
	std::cout << todo.getTaskAt(0).getDescription();
    return 0;
}
