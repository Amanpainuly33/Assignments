#include<iostream>
#include<cmath>
using namespace std;

bool even1(int n){
    int c =0,rem;
    while(n){
        rem = n%10;
        if(rem==1) c++;
        n /=10;
    }
    if(c%2==0) return true;
    else
    return false;
}

int binaryconverter(int n){
    int rem,i=0,s=0;
    while(n){
        rem = n%2;
        s += rem*pow(10,i);
        n /=2;
        i++;

    }
    return s;
}

int main(){
    int n;

    cout<<"Enter a number N ,between N>2 and N<100:";
    cin>>n;
    
    if(even1(binaryconverter(n)))
    cout<<"It is an evil number!"<<endl;
    else
    cout<<"It is not an evil number!"<<endl;
    return 0;
}