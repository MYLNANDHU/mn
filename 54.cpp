#include <iostream>
 
int main()
{
   int n;
 
  cout<<("Enter an integer\n");
gets("%d", &n);
    if(n%2!=0)
    n=n-1;
    else
    n=n-2;
cout<<("%d",n);
    return 0;
}
