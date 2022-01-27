#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int m=n;
	// finding compliment of a given number:
	if(n==0){
		cout<<"the compliment of the given number is:"<<1;
	}
	else{
	int mask=0;
	while(m!=0){
		mask=mask<<1|1;
		m=m>>1;
	}
	int comp=~n;
	int ans=comp&mask;
	cout<<"the compliment of the given number is:"<<ans;
	}
	return 0;
}
