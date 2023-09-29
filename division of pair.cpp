#include <iostream>
using namespace std;
int main() {
    int i,x,y;
    for(i=1;i<=10;i++){
        cout<<"Enter the value of x"<<" ";
        cin>>x;
        cout<<"Enter the value of y "<<" ";
        cin>>y;
        cout<<"("<<x<<","<<y<<")";
        if(y==0){
            cout<<"Cannot divide by 0 , Error";
        }
        else{
            cout<<x/y<<endl;
        }
    }
}