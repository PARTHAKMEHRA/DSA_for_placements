//Q.6 Write a Program to print the Full Pyramid Number Pattern.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of rows:";
  cin>>n;
  int np=1;
  for(int i=1;i<=n;i++)
       {
       for(int j=n-i;j>=0;j--)
       {
            cout<<" ";
       }
       for(int j=np;j>=1;j--)
       {
           cout<<j;
       }
       np+=2;
       cout<<endl;
       }
}