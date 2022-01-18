#include <iostream>
using namespace std;

class item
{
private:
    static int count;
    int number;
public:
    void getData();
    void getCount();
};

int item::count; //outside declaration of the static data member

void item::getData()
{
    cout << "Enter number : " ;
    cin >> number;
    count++;
}

void item::getCount()
{
    cout << "Count : " << count << endl;
}

int main454545()
{
    item a,b,c;
    a.getData();
    b.getData();
    c.getData();

    //here three objects are created

    a.getCount();
    b.getCount();
    return 0;
}
