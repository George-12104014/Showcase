#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Input a Number = ";
    cin>>x;
     if((x==2)||(x==3)||(x==5)||(x==7)){
        cout<<"It's a prime number";}
    else if((x!=2)||(x!=3)||(x!=5)||(x!=7)){
        if ((x%2==0)||(x%3==0)||(x%5==0)||(x%7==0)){
            cout<<"It's not a prime number";
        }
        else{
            cout<<"It's a prime number";}
    }
    
    }

