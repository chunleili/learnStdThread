#include <iostream>
#include <thread>

using namespace std;

class Task
{
public:
	void operator()(int i)
	{
		cout << i << endl;
	}
};


int main()
{
	for (int i = 0; i < 4; i++)
	{
		Task task;
		thread t(task, i);
		//do not use this, because it may be viewed as a function declaration
		//thread t(Task(), i);
		//If you want to use this, you should use initializer_list
		//thread t{(Task()), i};
		t.join();	
	}
		
	return 0;
}