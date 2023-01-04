#include <iostream>
#include <thread>

using namespace std;

int main()
{
	
	for (int i = 0; i < 4; i++)
	{
		thread t([i](){
			 cout << i << endl; 
		});
		t.join();	
	}
		
	return 0;
}