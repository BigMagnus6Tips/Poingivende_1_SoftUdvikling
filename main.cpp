#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Task
{
	public:
	std::string _description;
	int dueDate; // YYYYMMDD
	Task(std::string description, int duedate){
		_description = description;
		dueDate = duedate;
	}
	std::string getDescription()
	{
		return _description;
	}

	int getDueDate()
	{
		return dueDate;
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

	void outputAllTasks()
	{

		for (Task& i: todolist) {
			std::cout << "Description: " << i.getDescription() << "due date: " << i.getDueDate() << std::endl;

		}
	}
};

int main() {

    TodoList todo = TodoList();
	Task task1 = Task("Get groceries", 20501202);
	Task task2 = Task("Do laundry", 20501203);
	todo.addTask(task1);
	todo.addTask(task2);
	todo.outputAllTasks();
    return 0;
}
