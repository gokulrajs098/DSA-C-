#include<iostream>

using namespace std;


class father
{
    public:
    void fishing()
    {
        cout<<"Learn fishing"<<endl;
    }
};

class mother
{
    public:
    void cooking()
    {
        cout<<"Learn cooking"<<endl;
    }

};

class son:public father, public mother
{
    public:
    void coding()
    {
        cout<<"Learn Coding..."<<endl;
    }
};

int main()
{
    son o;
    o.cooking();
    o.fishing();
    o.coding();
}

