#include<iostream>

using namespace std;

class Math
{
private:
    int a, b;
public:
    Math(int x, int y)
    {
        a=x;
        b=y;
        cout<<"constructor created..."<<endl;
    }
    Math(Math &x)
    {
        a = x.a;
        b = x.b;
    }

public:

    void add()
    {
        cout<<a+b;
    }
};

int main()
{
    Math o(12, 13);
    Math o2(o);
    Math o2();
    o.add();
    o2.add();
    o3.add();
}
