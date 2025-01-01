#include<iostream>

using namespace std;

enum Gender {Male, Female};
int main()
{
    Gender g = Female;

    switch(g)
    {
        case Male:
            cout<<"Gender Male"<<endl;
            break;
        case Female:
            cout<<"Gender Female"<<endl;
            break;
        default:
            cout<<"Invalid";
            break;
    }
}
