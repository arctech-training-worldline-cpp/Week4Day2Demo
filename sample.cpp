#include <iostream>
using namespace std;

class sample
{
private:
    int x,y;
    int calculate_Total()
    {
        x = 10;
        y = 20;
        return x+y;
    }
public:
    int getTotal();
};

int sample::getTotal()
{
    return calculate_Total();
}

int main()
{
    sample s;
    s.getTotal();
    return 0;
}
