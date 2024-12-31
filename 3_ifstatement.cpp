#include<iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter the Value: ";
    cin>>c;

    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else if( c=='A'|| c == 'E'|| c == 'I' || c == 'O'|| c == 'U')
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else
    {
        cout<<c<<" is not a vowel"<<endl;
    }
}
