#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter the value of  n:";
    cin>>n;
    for(int i=1;i<=2*n-1;i=i+2){
        cout<<i<<endl;
    }
    return 0;
}