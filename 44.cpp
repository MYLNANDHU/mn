#include<iostream>
void main()
{
    int n,i,count=0;
    gets("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(n==i)
        count=1;
    }
    if(count==1)
    
       cout<<("yes");
        else
        cout<<("no");
    
   
    return 0;
}
