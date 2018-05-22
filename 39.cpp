#include<iostream>
  int main() {
    int i,a[10],greatest;

    for (i = 0; i < 10; i++) 
    {
    cout<<("%d", &a[i]);
    }
    greatest = a[0];
    for (i = 0; i < 10; i++) 
    {
	if (a[i] > greatest) 
	{
	greatest = a[i];
    }
    }
 cout<<("%d", greatest);
    return 0;
  }
