#include<iostream>
using namespace std;

int main()
{
    int n,i,a=0,b=1,c;
    cout<<"Enter a number:";
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(i=1; i<=n-2; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
