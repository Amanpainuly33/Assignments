#include<iostream>
using namespace std;

int main(){
    string name,address;
    double amt,namt;
    char type;

    cout<<"Enter the name :";
    getline(cin,name);
    cout<<"Enter  the address :";
    getline(cin,address);
    cout<<"Enter the amount of purchase :";
    cin>>amt;
    cout<<"Enter L if you have purchased Laptop and D for Desktop :";
    cin>>type;

    switch(type){
        case 'L':
            if(amt<=25000) namt = amt;
            else if(amt<=57000) namt = amt - (0.05*amt);
            else if(amt<=100000) namt = amt - (0.075*amt);
            else namt = amt - (0.1 *amt);
            break;

        case 'D':
            if(amt<=25000) namt = amt - (0.05*amt);
            else if(amt<=57000) namt = amt - (0.076*amt);
            else if(amt<=100000) namt = amt - (0.1*amt);
            else namt = amt - (0.15 *amt);
            break;
        default :
            cout<<"Wrong choice";
    }  
    cout<<endl<<"Name :"<<name<<endl;
    cout<<"Address :"<<address<<endl;
    cout<<"Amount to be paid :"<<namt<<endl;

    return 0;
         
}