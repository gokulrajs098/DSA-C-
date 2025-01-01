#include<iostream>

using namespace std;


int main()
{
    int a[5] = {20,30,40};
    int b[3] = {12,34,56};

    for( int x: a)
        cout<<x<<endl;

    for(int x: b)
        cout<<x<<endl;
}
