//Q.1 Write a Program to print the right triangle star pattern.
#include<iostream>
using namespace std;
int main()
{
    int n;
    std::cout<<"Enter number of rows:";
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}