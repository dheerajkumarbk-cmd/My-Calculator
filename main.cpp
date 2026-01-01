#include<iostream>
using namespace std;
int main()
{
    double a,b;
    char optr;

    cout<<"Mention the operator";
    cin>>optr;
    cout<<"Enter two numbers";      
    cin>>a>>b;
    switch(optr)
    {
        case '+':
            cout<<"Sum is: "<<a+b;
            break;
        case '-':
            cout<<"Difference is: "<<a-b;
            break;
        case '*':
            cout<<"Product is: "<<a*b;
            break;
        case '/':
            if(b!=0)
                cout<<"Quotient is: "<<a/b;
            else
                cout<<"Error: Division by zero";
            break;
        default:
            cout<<"Invalid operator";
    }
    return 0;
}