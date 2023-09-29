#include <iostream>
using namespace std;
int main() {
    int i,n;
    cout<<"enter the number if which table you want "<<" ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<< n<<"."<<i<<"="<<n*i<<endl;
    }
}