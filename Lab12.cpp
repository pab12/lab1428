#include <iostream>

using namespace std;
int mulNumbers(int n);
int fib(int n);


int mulNumbers(int n)
{
    if (n==1)
        return 1;
        return n * mulNumbers(n-1);



}




int fib(int n)
{
    if(n==1)
    {
        return n;
    }
    else if (n==0)
    {
        return n;
    }
    else;
    {
        return fib(n-1)+fib(n-2);
    }
}



int main()
{
int n;
cout<<"Pick a number"<<endl;
cin>>n;

cout<<"The factorial of ";
cout<<n;
cout<<" is: ";
cout<<mulNumbers(n)<<endl;
cout<<"The Fibonacci number of ";
cout<<n;
cout<<" is: ";
cout<<fib(n);




return 0;
}
