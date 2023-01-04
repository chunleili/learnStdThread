#include <iostream>
#include <thread>

using namespace std;

class Node
{
public:
	int a = 1;
	int b = 2;
};

void func(Node &node)//will become copy even if we pass by reference
{
	node.a = 10;
	node.b = 20;
}

int main()
{
	Node node;

	thread t(func, node);
	t.join();

	cout << node.a << endl ;
	cout << node.b << endl ;
}