#include<iostream>
using namespace std;
int main()
{
    int n1=1,n2=1,n3=0;
    int n;
    int sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<n1<<"+"<<n2;
    for(int i=3;i<=n;i++){
        n3=n2+n1;
        cout<<"+";
        cout<<n3;
        n1=n2;
        n2=n3;
    }
    return 0;
}