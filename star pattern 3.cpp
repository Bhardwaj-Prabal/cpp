#include<iostream>
using namespace std;

int main(){
    int i=0,j=0;
    int row;
    cout<<"Enter the number of row";
    cin>>row;

    for(i=0;i<=row;i++){
        for(j=row;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}