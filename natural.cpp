#include<iostream>
using namespace std;
void inorder(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    return inorder(n-1);
}
int main()
{
    int n;
    cout<<"enter the value of  n:";
    cin>>n;
    inorder(n);
    return 0;
}