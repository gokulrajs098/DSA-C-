#include<iostream>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
float sum(float a, float b)
{
    return a+b;
}

int main()
{
    cout<<sum(12,13)<<endl;
    cout<<sum(12,13,15)<<endl;
    cout<<sum(12.56f,13.67f)<<endl;
    return 0;
}
