#include<iostream>

using namespace std;

class father
{
    public:
    father()
    {
        cout<<"Father constructer..."<<endl;
    }
    fishing()
    {
        cout<<"Learned fishing.."<<endl;
    }
};
class mother:virtual public father
{
    public:
    mother()
    {
        cout<<"Mother constructer..."<<endl;
    }
};
class son:virtual public father
{
    public:
    son()
    {
        cout<<"Son constructer..."<<endl;
    }
};
class daughter: public mother, public son
{
    public:
    daughter()
    {
        cout<<"Daughter constructer..."<<endl;
    }
};
int main()
{
    daughter o;
    o.fishing();

}
