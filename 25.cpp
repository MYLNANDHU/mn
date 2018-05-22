#include<iostream>
void main()
{
int n,sum=0,i,a[100];
cin>>("%d",&n);
for(i=0;i<n;i++)
{
cin>>("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<("median is %d",sum/n;
}
