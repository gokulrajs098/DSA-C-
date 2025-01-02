#include<iostream>

using namespace std;


class account
{
private:
    int accnum;
    string name;

public:
    void getUserDetails()
    {
        cout<<"Enter User Details:"<<endl;
        cout<<"Enter Customer Name   :";
        cin>>name;
        cout<<"Enter account number  :";
        cin>>accnum;

    }
    void display(string type)
    {
        cout<<"Customer Name : "<<name<<endl;
        cout<<"Account Number: "<<accnum<<endl;
        cout<<"Account Type  : "<<type<<endl;

    }
};

class c_account:public account
{
private:
    int balance=0, a, b;
public:
    void deposit()
    {
        cout<<"Enter the amount you want to deposit : ";
        cin>>a;

        balance += a;

        cout<<"Balance after deposit: "<<balance<<endl;
    }

    void display_balance()
    {
        cout<<"Balance in your account: "<<balance<<endl;
    }
    void withdraw()
    {
        cout<<"Enter the withdrawal amount: ";
        cin>>b;

        balance -=b;

        cout<<"Balance after withdrawal: "<<balance<<endl;

    }
};
class s_account:public account
{
private:
    int balance=0, interest, a, b;
public:
    void deposit()
    {
        cout<<"Enter the amount you want to deposit : ";
        cin>>a;


        interest = a*0.5;
        balance += a+interest;

        cout<<"Balance after deposit: "<<balance<<endl;
    }

    void display_balance()
    {
        cout<<"Balance in your account: "<<balance<<endl;
    }
    void withdraw()
    {
        cout<<"Enter the withdrawal amount: ";
        cin>>b;

        balance -=b;

        cout<<"Balance after withdrawal: "<<balance<<endl;

    }
};


int main()
{

    int choice;
    string acctype;




    cout<<"Enter account type ['S'(savings) 'C'(current)] :";
    cin>>acctype;

    if (acctype=="S"){
        s_account acc;
        acc.getUserDetails();
        while(1)
        {
            cout<<"Choose what do you want to do..."<<endl;

            cout<<"1) Deposit amount"<<endl;
            cout<<"2) Check Balance"<<endl;
            cout<<"3) Withdraw amount"<<endl;
            cout<<"4) Display Details"<<endl;
            cout<<"5) Cancel"<<endl;

            cout<<"Enter your choice :";
            cin>>choice;

            switch(choice)
            {
            case 1:
                acc.deposit();
                break;
            case 2:
                acc.display_balance();
                break;
            case 3:
                acc.withdraw();
                break;
            case 4:
                acc.display(acctype);
                break;
            case 5:
                goto end;
                break;

            default:
                cout<<"INVALID CHOICE !!!!"<<endl;
            }
        }
    }
    else{
        c_account acc;
        acc.getUserDetails();
        while(1)
        {
            cout<<"Choose what do you want to do..."<<endl;

            cout<<"1) Deposit amount"<<endl;
            cout<<"2) Check Balance"<<endl;
            cout<<"3) Withdraw amount"<<endl;
            cout<<"4) Display Details"<<endl;
            cout<<"5) Cancel"<<endl;

            cout<<"Enter your choice :";
            cin>>choice;

            switch(choice)
            {
            case 1:
                acc.deposit();
                break;
            case 2:
                acc.display_balance();
                break;
            case 3:
                acc.withdraw();
                break;
            case 4:
                acc.display(acctype);
                break;
            case 5:
                goto end;
                break;

            default:
                cout<<"INVALID CHOICE !!!!"<<endl;
            }
        }

    }
    end:
    cout<<"Thank you for Banking with us..."<<endl;
}
