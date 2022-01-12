//Q.5 Write a program to Print a solid Diamond Star Pattern.
#include<iostream>
using namespace std;
int main()
{
    int n;
    std::cout<<"Enter number of rows:";
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>0;j--){
            cout<<" ";           /*number of spaces*/
        }
        
        for(int j=0;j<=i;j++){
            std::cout<<"* ";      /*number of stars*/
        }
        std::cout<<"\n";
    }
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}