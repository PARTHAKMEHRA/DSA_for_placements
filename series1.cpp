#include<iostream>
using namespace std;
int main()
{
    int n;
    int product=1;
    cout<<"enter the value of  n:";
    cin>>n;
    cout<<"1";
    for(int i=2;i<=n;i++){
        cout<<"+";
        product*=2;
        cout<<"1/"<<product;
    }
    return 0;
}