#include<iostream>
using namespace std;

void findMax(int a,int b, int c){
    if((a>b) && (a>c)){
        cout<<a<< " is largest"<<endl;

    }
    else if((b>a) && (b>c)){
        cout<<b<< " is largest "<<endl;
    }
     else{
        cout<<c<< " is largest "<<endl;
    }
}

int main(){
    findMax(10,20,30);
    return 0;
}