#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void car()
    {
        cout<<"Car start"<<endl;
    }
};
class Derived: public Base
{
    public:
    void car()
    {
        cout<<"BMW Advance gear"<<endl;
    }
};
int main()
{
    Derived o;
    Base *p=NULL;
    p = &o;
    p->car();
};