#include <iostream>

int main(void) 
{
	char s[50];
	int k,i;
	cout<<("enter the string:");
gets("%s",s);
cout<<("enter the number:");
gets("%d",&k);
	for(i=0;i<k;i++)
	{
	cout<<("\n%s",s);
	}
	return 0;
}
