#include <iostream>
using namespace std;

class sample2; //forward declaration
class sample1
{
    private :
        int a, b;
    public :
        void setValue();
        friend float mean(sample1 s1, sample2 s2);
};

class sample2
{
    private :
        int a, b;
    public :
        void setValue();
        friend float mean(sample1 s1, sample2 s2);
};

void sample1::setValue()
{
    a = 10;
    b = 20;
}

float mean(sample1 s1, sample2 s2)
{
    return ((s1.a + s1.b + s2.a + s2.b)/4);
}

int main()
{
    sample1 s1;
    s1.setValue();

    sample2 s2;
    s2.setValue();

    cout << mean(s1, s2);
    return 0;
}