#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Input= ";
    cin>>x;
    int y=0;
    do{
        y+=x;
        x--;

    }while(x>0);
    cout<<"Sum= "<<y<<endl;

    return 0;
}