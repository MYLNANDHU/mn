#include <iostream>
int main(void) {
	char a[50];
	int i,count=0,m;
gets("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]!=' ')
		count++;	
	}
	cout<<("%d",count);
	return 0;
}
