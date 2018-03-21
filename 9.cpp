#include <iostream>
using namespace std;
int main(){
	int num,k,i,sum=0;
	cout<<"Enter two numbers\n";
	cin>>num>>k;
	int*arr=new int[num];
	cout<<"Enter the array values\n";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
		cout<<arr[i];
	}
	for(i=0;i<k;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"\n"<<sum;
	return 0;
}
