#include<iostream>
using namespace std;
int main()
{
    int num,m=0,isPrime=0;
    cout << "Enter the number to check the prime number:";
    cin>>num;
    if(num ==1 || num==0){
     isPrime=1;
}
m=num/2;
for(int i=2;i<=m;i++){
    if(num%i==0){
       cout<<"Not a Prime Number";
       isPrime=1;
       break;
    }
}
if(isPrime==0){
   cout<<"Prime Number";
}           
    return 0;
}