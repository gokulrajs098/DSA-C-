#include<iostream>

using namespace std;

class B;
class A
{
private:
    int x = 10;
    friend B;
};

class B
{
    A o;
    public:
    void display()
    {
        cout<<"X :"<<o.x<<endl;
    }
};


int main(){
    B obj;
    obj.display();
}