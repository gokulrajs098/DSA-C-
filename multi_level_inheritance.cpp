
#include<iostream>;

using namespace std;

class grandfather
{
    public:
    void fishing()
    {
        cout<<"Learn fishing"<<endl;
    }
};

class father: public grandfather
{
    public:
    void playing()
    {
        cout<<"Learn playing"<<endl;
    }

};

class son:public father
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
    o.fishing();
    o.playing();
    o.coding();

}
