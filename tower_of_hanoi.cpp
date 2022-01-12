#include<iostream>
using namespace std;
void toh(int n,char a,char b,char c){
    if(n==0)
    {
        return;
    }
    toh(n-1,a,c,b);
    cout<<a<<"->"<<b<<endl;
    toh(n-1,c,b,a);
}
int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}