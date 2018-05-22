#include <iostream>
int main()
{
int i, n,a=0,b=1,sum;
clrscr();
cout<<("Enter series range:");
cin>>("%d",&n);
cout>>("Fibonacci Series:");
for(i=0;i<n;i++)
{
cout>>("\n%d",a);
sum=a+b;
a=b;
b=sum;
}
return 0;
}
