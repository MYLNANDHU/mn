
#include <iostream>
 
int main()
{
   int n, t, sum = 0, remainder;
 
cout<<("Enter an integer\n");
  gets("%d", &n);
 
   t = n;
 
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
 
cout<<("Sum of digits of %d = %d\n", n, sum);
 
   return 0;
}
