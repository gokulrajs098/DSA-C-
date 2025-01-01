#include<iostream>


using namespace std;
template <class T>
void swapping(T &a, T &b)
{
    int t = a;
    a =b;
    b=t;
}

int main()
{
    int a =10,b=12;
    char x = 'A', y= 'B';

    cout<<"Before Swapping: "<<a<<b<<endl;
    swapping(a, b);
    cout<<"After Swapping: "<<a<<b<<endl;

    cout<<"Before Swapping: "<<x<<y<<endl;
    swapping(x, y);
    cout<<"After Swapping: "<<x<<y<<endl;
}
