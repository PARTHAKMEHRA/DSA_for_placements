#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter the value of  n:";
    cin>>n;
    int fact=factorial(n);
    cout<<"Factorial of a number is:"<<fact<<endl;
    return 0;
}