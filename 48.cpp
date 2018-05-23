#include <iostream>

int main()
{
    int n,a[10],i,sum=0;
    int avg;
  gets("%d",&n);
    for(i=0;i<n;i++)
    {
        cout<<("%d",&a[i]);
        sum=sum+a[i];
    }
   
    avg=sum/n;
    
    cout<<("%d",avg);
   
    

    return 0;
}

