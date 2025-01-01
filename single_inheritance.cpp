#include<iostream>

using namespace std;


class father
{
    public:
    void bhk()
    {
        cout<<"have own bhk..."<<endl;
    }
};

class son:public father
{
    public:
    void car()
    {
        cout<<"have own car...."<<endl;
    }
};

int main()
{
    son o;
    o.bhk();
    o.car();
}
