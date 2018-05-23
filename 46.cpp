#include <iostream>
int main()
{
    int n,count=0;
 gets("%d",&n);
    while(n)
    {
    n=n/10;
    count++;
    }
   cout<<("%d",count);
    

    return 0;
}
