#include<iostream>
using namespace std;
int a,y,x,m,n;
int main()
{
    cin>>a;
    for(x=3;x<=a;x=x+3)
    {
        y=a-x;
        if(y%7==0)
        {
           m=x/3;
           n=y/7;
        }
    }
    cout<<m<<" "<<n;

    return 0;
}
