#include<iostream>
using namespace std;

class employee{
    long pan;
    string name;
    double taxincome,tax;

    public:
    void InputInfo(){
        cout<<"Enter the name of the employee :";
        getline(cin,name);
        cout<<"Enter the pan number of the employee :";
        cin>>pan;
        cout<<"Enter the taxable income :";
        cin>>taxincome;

    }
    void Taxcalc(){
        if(taxincome<=250000) tax = 0.0;
        else if(taxincome<300000) tax = (taxincome-250000)*0.1;
        else if(taxincome<400000) tax = (taxincome-300000)*0.2 +5000;
        else tax = (taxincome-400000)*0.3 +25000;
    }
    void DisplayInfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Pan  :"<<pan<<endl;
        cout<<"Taxable Income :"<<taxincome<<endl;
        cout<<"Tax  :"<<tax<<endl;
    }
};

int main(){
    employee obj;
    obj.InputInfo();
    obj.Taxcalc();
    obj.DisplayInfo();

}
