#include <iostream>
#include <thread>

using namespace std;

class Task
{
public:
	void do_work(int i)
	{
		cout << i << endl;
	}
};


int main()
{
	cout<<"member func"<<endl;
	for (int i = 0; i < 4; i++)
	{
		Task task;
		thread t(&Task::do_work, &task, i);
		t.join();	
	}
		
	return 0;
}