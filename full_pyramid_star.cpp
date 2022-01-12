//Q.4 Write a Program to print the Full Pyramid Star pattern.
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
    return 0;
}