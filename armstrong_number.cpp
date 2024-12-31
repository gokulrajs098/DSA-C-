#include<iostream>

using namespace std;

int main()
{
    int n,  i, j, l, sum=0, mul;
    string s;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    s = to_string(n);
    l = s.length();

    for(i=0;i<l;i++){
        mul = 1;
        int digit = s[i]-'0';
        for(j=1;j<=l;j++){
            mul *= digit;
        }
        
        sum += mul;

    }   
    if(sum == n){
        cout<<n<<" is armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }

}