#include <iostream>
int main() 
{
 int i,n;
 int arr[100];
 cout<<("enter the 1 to 100 value");
 cin>>("%d",&n);
 for(i=0;i<n;i++)
 {
 cout<<("enter the number:",i+1);
  cin>>("%d",&arr[i]);
 }
 for(i=0;i<=n;i++)
 {
  if(arr[0]<arr[i])
   a[0]=a[i];
 }
 cout<<("largest element%d",a[0]);
}
