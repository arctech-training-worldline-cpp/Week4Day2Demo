#include <iostream>
using namespace std;

void demo()
{
	static int count = 0;
	cout << "count : " << count << " ";
	count++;
}

int main456456()
{
	for (int i = 0; i < 5; i++)
	{
		demo();
	}
	return 0;
}