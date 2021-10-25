//Fibonacci series
//first number=0 second number=1 third number=first+second 0+1=1
//then first becomes second, second becomes third third= first +second
//0 1 1 2  
//0 is 1st number 1 is 2nd number 3rd is 0+1=1 then 1 is 1st 1 is 2nd 3rd is 2 and so on
#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1;
    int n3,n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2; i<n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    cout<<n3;
    return 0;
}