#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of  n:";
    cin>>n;
    for(int i=2;i<=n;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
             c++;
        }
        if(c==2){
            cout<<i<<endl;
        }
    }
}