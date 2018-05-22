#include<iostream.h>
int main()
{
	int arr[10],i,n;
	cout<<("enter the size of the array:");
	cin>>("%d",&n);
	cout<<("\n enter the array elments:");
	for(i=0;i<n;i++)
	{
		cin>>("%d",&arr[i]);
		cout<<("\n%d %d",arr[i],i);
	}
	return 0;
}
