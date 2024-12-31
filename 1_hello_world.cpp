#include<iostream>
using namespace std;
namespace name1{
    int age = 23;
    string name = "gokul";
}

namespace name2{
    int age = 23;
    string name = "Raj";
}

using namespace name1;


int main()
{
//    int a;
//
//    cout<<"name: ";
//    cout<<name<<endl;
//    cout<<"Age: ";
//    cout<<age;

    string s;

    cout<<"Enter a para: ";
    getline(cin, s);
    cout<<"Para is "<<s;

    return 0;
}
