#include <iostream>
#include <thread>

using namespace std;

void func()
{
	cout << "In func thread id:"<<this_thread::get_id() << endl;
}

int main()
{
	for (size_t i = 0; i < 4; i++)
	{
		thread t(func);

		cout << "In main thread id:"<<t.get_id() << endl;

		t.join();

		cout<<"-----------------"<<endl;
	}
}