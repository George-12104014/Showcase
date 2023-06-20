#include<iostream>
using namespace std;
int main(){
    int x;
    for (int x=1;x<=100;x++){
        if((x%5==0) &&(x%7==0) ){
            cout<<"Here is your number = "<<x<<endl;
            break;}
        }
    
}