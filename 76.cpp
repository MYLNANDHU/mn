#include<iostream>
int main(void){

int n,i,flag=0;

cin>>n;

for(i=2;i<=n/2;i++)

{

if(n%i==0)

{

flag=1;

break;

}
}

if(flag==0)

{

cout<<"no";

}

else

{

cout<<"yes";

}

return 0;

}
