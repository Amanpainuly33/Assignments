#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,choice;
    double a,r,p;
    cout<<"Enter 1 for Term Deposit AND 2 for Recuring Deposit :";
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        cout<<"Enter the principal :";
        cin>>p;
        cout<<"Enter the rate of interest :";
        cin>>r;
        cout<<"Enter the time period in years :";
        cin>>n;

        a = p*pow((1+r/100),n);
        cout<<endl<<"Maturity amount :"<<a<<endl;
        break;
    case 2:
        cout<<"Enter the monthly installment :";
        cin>>p;
        cout<<"Enter the rate of interest :";
        cin>>r;
        cout<<"Enter the time period in months :";
        cin>>n;
        a = p*n +((p*n*(n+1))/2) *(r/100)*(1.0/12);

        cout<<endl<<"Maturity amount :"<<a<<endl;
        break;
    default:
    cout<<"Invalid choice";
        break;
    } 
    return 0;  
}