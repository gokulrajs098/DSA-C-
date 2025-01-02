#include<iostream>
using namespace std;

class student
{
    private:
        string name;
        int age;
    public:
    student(string n, int a)
    {
        this->setName(n);
        this->setAge(a);
    }

    public: 
    void getDetails()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

    public:
    string getName()
    {
        return this->name;
    }

    public:
    void setName(string n)
    {
        this->name=n;
    }
    public:
    int getAge()
    {
        return this->age;
    }

    public:
    void setAge(int a)
    {
        this->age=a;
    }
};

int main()
{
    student o("gokul", 12);
    o.getDetails();
    o.setName("raj");
    o.getDetails();

}