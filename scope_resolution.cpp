#include<iostream>
using namespace std;
class student
{
    private:
        string name;
        int m1,m2,m3, total;
        float avg;

    public:
        void getData()
        {
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the marks for 3 subject: ";
            cin>>m1>>m2>>m3;
        }
        void display();
};

void student::display()
{
    total = m1+m2+m3;
    avg = total/3.0;

    cout<<"Name    :"<<name<<endl;
    cout<<"M1      :"<<m1<<endl;
    cout<<"M2      :"<<m2<<endl;
    cout<<"M3      :"<<m3<<endl;
    cout<<"Total   :"<<total<<endl;
    cout<<"Average :"<<avg<<endl;
}

int main()
{
    student o;
    o.getData();
    o.display();
    return 0;
}

