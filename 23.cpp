#include<iostrean>
void main()
{
int a[10],i,j,temp,n;
cout<<("enter limit");
cin>>("%d",&n);
cout<<("enter number");
for(i=0;i<n;i++)
{
cin>>("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n;i++)
{
if(temp>a[i])
{
temp=a[i];
}

}

cout<<("%d",temp);
}
