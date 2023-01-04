#include <iostream>
#include <thread>

using namespace std;

int main()
{

	auto fn = [](const int *a)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << *a << endl;
		}
	};

	cout << "detach thread another bug\n";
	[fn]
	{
		int a = 1010;
		thread t(fn, &a);
		t.detach();
	}();
}