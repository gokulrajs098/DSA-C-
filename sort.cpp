#include<iostream>

using namespace std;


int main()
{

    int t=0, n=10, a[10], i, j, temp;

    for(i=1;i<=n;i++)
    {

        cout<<"Enter the value for index "<<i<<" :";
        cin>>a[i];

    }
    for(i=1;i<=n;i++)
    {
        bool swapped = false;
        for(j=1;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;

    }


    for(j=1;j<=n;j++)
    {
        cout<<a[j]<<endl;
    }

}
