#include<iostream>
using namespace std;

void findGreater(int x , int y){
    if(x>y){
        cout<<x<<"is greater"<<endl;
        
    }
    cout<<y<<"is greater "<<endl;
    return;

}
int main(){
    findGreater(20,30);
    findGreater(30,20);
    return 0;
}

