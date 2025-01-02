#include<iostream>

using namespace std;

class student
{
    private:
    static int x;
    string name;
    int age;

    public:
    student(string n, int a)
    {
        x++;
        name = n;
        age = a;
    }

    public:
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age:  "<<age<<endl;
    }
    public:
    static int getCount()
    {
        return x;
    }

};

int student::x=0;
int main()
{
    student s1("gokul", 23);
    student s2("sathish", 22);
    student s3("rahul", 20);
    s1.print();
    s2.print();
    s3.print();

    cout<<"Total Students: "<<student::getCount()<<endl;
    

}