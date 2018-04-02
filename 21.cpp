#include <iostream>
using namespace std;
int main(){
    int num,a,d,i,ans = 0;
    cout<<"Enter the number of items,starting value and difference"<<endl;
    cin>>num>>a>>d;
    for(i = 0;i<num;i++){
    ans += a;
    a += d;
    }
    cout<<ans;
    return 0;
}
