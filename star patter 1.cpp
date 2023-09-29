#include<iostream>
using namespace std;

int main(){
    int row;
    int i,j;
    cout<<"Enter the number of row"<<" ";
    cin>>row;
    for(i=1;i<=row;i++){
        int space=i-1;
        for(j=1;j<=row;j++){
            if(j<=space){
                cout<<" ";
            
            }
            else{
                cout<<"*";

            }
        }
        cout<<endl;
    }
}