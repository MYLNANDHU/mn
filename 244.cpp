#include<iostream>

void main()
{
    int i,j,n,a[15],temp;
    clrscr();
   cout<<("Enter the array size\t");
 cin>>("%d\n",&n);
    for(i=0;i<n;i++)
    {
        cin>>("%d\t",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
  cout<<("%d",a[i]);
    }
    getch();

}
