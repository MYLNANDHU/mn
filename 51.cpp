#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>("%d",&n);
    while(n)
    {
        n=n/10;
       cout<<("%d",n);
    }
    return 0;
    }
