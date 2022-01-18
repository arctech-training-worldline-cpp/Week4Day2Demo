#include<iostream> 
using namespace std;
class test
{
    int code;
    static int count; // static member variable
    public:
        void set(void)
        {
            code=++count;
        }
        void showcode(void)
        {
            cout<<"object member : "<<code<<endl;
            
        } 
        static void showcount(void)
        { 
            cout<<"count="<<count<<endl;            
        }
};
int test :: count ; 

int main()
{

    test t1,t2;
    t1.set();
    t2.set();
    test :: showcount (); 
    test t3;
    t3.set();
    test:: showcount( );//t3.showcount();
    t1.showcode( );
    t2.showcode( );
    t3.showcode( );
return 0;
}