#include <iostream>
int main(void)
{
	int n,i;
cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i;
		}
	}
	return 0;
}
