#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int n)
{
    int i;

    if(n<2){
        return false;
    }
    for(i=2;i<=sqrt(n);i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n=100, j;
    for(j=1;j<=n;j++){
        if (is_prime(j)){
            cout<<j<<endl;
        }

    }
    return 0;
}


