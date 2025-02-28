#include<iostream>
using namespace std;

int reverseNumber(int num,int rev=0){
    if(num==0)
        return rev;

    return reverseNumber(Num/10,rev*10+(num%10));
}
bool is palindrome(int num){
return num==reverseNumber(num);
}
int main(){
cout<<"Enter a number:";
cin>>num;
if(is palindrome(num))
    cout<<num<<is not a palindrome number<<endl;
elsecout<<num<<"is not a palindrome number"<<endl;
return 0;
}
