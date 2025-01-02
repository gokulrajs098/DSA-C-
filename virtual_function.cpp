#include<iostream>

using namespace std;

class vaccine
{
    public:
    virtual void putvaccine()
    {
        cout<<"Put Vaccine..."<<endl;
    }
};

class covaxin: public vaccine
{
    public:
    void putvaccine()
    {
        cout<<"put covaxin"<<endl;
    }
};

class covidvaccine: public vaccine
{
    public:
    void putvaccine()
    {
        cout<<"put covid vaccine"<<endl;
    }
};
int main()
{
    covaxin cx;
    covidvaccine cv;

    vaccine *o;
    o=&cx;
    o->putvaccine();
    o=&cv;
    o->putvaccine();

}