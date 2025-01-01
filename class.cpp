#include<iostream>

using namespace std;

class circle
{
    private:
        float radius;
    public:
        float area()
        {
            cout<<"\nEnter the radius: "<<endl;
            cin>>radius;

            return 3.14*(radius*radius);
        }

        float circumference()
        {
            return 2*3.14*radius;
        }
};


int main()
{
    circle o;

    cout<<"Area of  circle: "<<o.area()<<endl;

    cout<<"Circumference of circle: "<<o.circumference()<<endl;

}

