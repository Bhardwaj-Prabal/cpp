#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows"<<" ";
    cin>>n;
    for(int i=0;i<n;i++){
        int space=n-i;
        for(int j=0;j<=n;j++){
            if(j<space){
                cout<<" ";
            
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
   
}