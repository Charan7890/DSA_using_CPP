#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num;
    cin>>num;
    int res1=0;
    int dummy=num;
    while(num!=0){
        dummy=num&1;
        res1=res1*10+dummy;
        num=num>>1;
        }
    cout<<res1<<endl;
    
    int res2 = res1;
    int sum=0,i=0;
    while(res1!=0){
        int rem = res1%10;
        if(rem==0){
        sum+=pow(2,i);
        }
        i+=1;
        res1 = res1/10;
    }
    cout<<"the value is:"<<sum;
    return 0;
}