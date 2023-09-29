#include<iostream>
using namespace std;

int myMax(int a, int b){
    if(a>b){
        // here if we use cout then both return and cout will work as we have not used else and it will print both numbers
        return a;

    }
    return b;

}

int main(){
    cout<<myMax(10,20)<<" ";
    cout<<myMax(20,10)<<" ";
    return 0;

}