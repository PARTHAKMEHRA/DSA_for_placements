//Q.7 Write a Program to print the Solid Half Diamond Number Pattern.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=n;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=n;j>=i+1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
