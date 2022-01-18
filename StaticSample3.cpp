
#include<iostream>
using namespace std;

class test
{
	int i;
	public:
		test()
		{
			i = 0;
			cout << "Inside Constructor" << endl;
		}
		~test()
		{
			cout << "Inside Destructor" << endl;
		}
};

int main()
{
	int x = 0;
	if (x==0)
	{
		static test obj;
	}
	cout << "End of main" << endl;
	return 0;
}


