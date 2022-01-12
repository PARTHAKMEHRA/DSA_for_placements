#include<iostream>
using namespace std;
int main()
{
    int n;
    int product=1;
    cout<<"Enter number of n:";
    cin>>n;
    cout<<"1";
    for(int i=2;i<=n;i++){
        cout<<"+";
        product*=3;
        cout<<product;
    }
    return 0;
}