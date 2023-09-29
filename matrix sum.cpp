#include <iostream>

using namespace std;

int main()
{
    int n1,m1;
    cout<<"Enter the number of rows"<<endl;
    cin>>n1;
    cout<<"Enter the number of columns"<<endl;
    cin>>m1;
    
    int arr1[50][50]={};
    for(int i=0; i<n1;i++){
        for(int j=0;j<m1;j++){
            cout<<"Enter the elements of array 1";
            cin>>arr1[i][j];
            
            
        }
        cout<<endl;
    }
    for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
            
    }
    int n2,m2;
    cout<<"Enter the number of rows"<<endl;
    cin>>n2;
    cout<<"Enter the number of columns"<<endl;
    cin>>m2;
    
    int arr2[50][50]={};
    for(int i=0; i<n2;i++){
        for(int j=0;j<m2;j++){
            cout<<"Enter the elements of array 1";
            cin>>arr2[i][j];
            
        }
        cout<<endl;
    }
    
    for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<endl;
    }
    
    int arr3[50][50]={};
    if((n1==n2) && (m1==m2)){
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                arr3[i][j]=arr1[i][j]+arr2[i][j];
                
                
            }
            cout<<endl;
        }
        
    }
    
    for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
            