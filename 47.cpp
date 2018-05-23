#include <iostream>

int main()
{
    int n,a[10],i,max=0,min=0;
    max=a[0];
    min=a[0];
   gets("%d",&n);
    for(i=0;i<n;i++)
    {
      cout<<("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        
            max=a[i];
        else if(a[i]<min)
        min=a[i];
    }
    
   cout<<("%d %d",min,max);
   
    

    return 0;
}
