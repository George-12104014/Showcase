#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Input your number= ";
    cin>>x;
if(x>=90){
        cout<<"A+"<<endl;
    }
else if((80<x) && (x<89)){
        cout<<"A"<<endl;
    }
else if((70<x)&&(x<79)){
        cout<<"B+"<<endl;
    }
else if((60<x)&&(x<69)){
        cout<<"B"<<endl;
    }
else if((50<x)&&(x<59)){
        cout<<"C"<<endl;
    }
else if((40<x)&&(x<49)){
        cout<<"D"<<endl;
    }
else if((30<x)&&(x<39)){
        cout<<"E"<<endl;
}
else{
        cout<<"Fail";
    }
    return 0;

}