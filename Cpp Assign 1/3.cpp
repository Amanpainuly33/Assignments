#include<iostream>

using namespace std;

int sumofdigits(int n){
    int s=0,rem;
    while(n){
        rem = n%10;
        s += rem;
        n /=10;
    }
    return s;
}
int productofdigits(int n){
    int p=1,rem;
    while(n){

        rem = n%10;
        p *=rem;
        n /=10;
    }
    return p;
}
int main(){
    int n;

    cout<<"Enter a 2-digit number :";
    cin>>n;
    if(n<10 || n>99){
        cout<<"Please enter a valid 2-digit number :";
        cin>>n;
    }

    if(sumofdigits(n) + productofdigits(n)==n)
        cout<<endl<<"Special 2-digit number!"<<endl;
    else
        cout<<endl<<"Not a Special 2-digit number!"<<endl;

    return 0;
}