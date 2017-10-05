#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double total;double tip; double percent;
cout<< fixed<<setprecision(2);
cout<<"what is total bill?"<<endl;
cin>>total;
cout<<"what percent would you like for the tip?"<<endl;
cin>>percent;
tip = total*(percent/100);
cout<<"the tip will be:";
cout<<tip;

}
