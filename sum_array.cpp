#include<iostream>

using namespace std;


int main()
{
    int a[10], sum=0;
    int i, j;
    int n = 10;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter the value for index: "<<i<<" " ;
        cin>>a[i];
    }

    for(j=1;j<=n;j++)
    {
        sum += a[j];
    }
    cout<<"\nSun of an array: "<<sum;

}
