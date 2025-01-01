#include<iostream>

using namespace std;


int main()
{

    int t=0, n=10, a[10], i;

    for(i=1;i<=n;i++)
    {

        cout<<"Enter the value for index "<<i<<" :";
        cin>>a[i];
        if (a[i]>t)
        {
            t = a[i];
        }
    }
    cout<<"greatest in the array: "<<t;
}
