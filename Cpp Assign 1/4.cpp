#include<iostream>

using namespace std;

int smallestd(int n){
    int s=n%10,rem;
    n/=10;
    while(n){
        rem = n%10;
        if(rem<s) s = rem;
        n /=10;
    }
    return s;
}

int main(){
    int n;

    cout<<"Enter a number :";
    cin>>n;

    cout<<endl<<"Smallest digit is :"<<smallestd(n)<<endl;
    return 0;
}