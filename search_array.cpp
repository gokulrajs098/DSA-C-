#include<iostream>

using namespace std;

int main()
{

    int a[100], i, j, v, n ;

    cout<<"Enter the Limit: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter the value for "<<i<<": ";
        cin>>a[i];
    }

    cout<<"Enter the value for search: ";
    cin>>v;

    for(j=1;j<=n;j++)
    {
        if(a[j]==v)
        {
            cout<<v<<" Value found in index: "<<j<<endl;
        }

    }
}
