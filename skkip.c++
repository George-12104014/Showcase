#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<=100;i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<"Take this= "<<i<<endl;
        }

    }
}