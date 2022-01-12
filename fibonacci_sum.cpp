#include<iostream>
using namespace std;
int main()
{
    int n1=1,n2=1,n3=0;
    int n;
    int sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    n3=n2+n1;
    while(n1<=n)
    {
        sum+=n1;
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    cout<<sum<<endl;
    return 0;
}