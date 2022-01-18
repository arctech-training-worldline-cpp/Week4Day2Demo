#include <iostream>
using namespace std;

class Time{
	public :
		int hour;
		int min;

		void add(Time argTime);
};

void Time::add(Time argTime)
{
	hour = hour + argTime.hour;
	min = min + argTime.min;

	argTime.hour = 0;
	argTime.min = 0;
}

int main78787()
{
	Time t1, t2;
	t1.hour = 1;
	t1.min = 20;

	t2.hour = 0;
	t2.min = 10;

	t2.add(t1);

	cout << "t2 Hour : " << t2.hour << " Min : " << t2.min << endl;
	cout << "t1 Hour : " << t1.hour << " Min : " << t1.min << endl;

	return 0;
}