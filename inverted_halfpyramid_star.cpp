//Q.3 Write a Program to print inverted half pyramid star pattern.
#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}