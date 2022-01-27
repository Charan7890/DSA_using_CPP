#include<iostream>
using namespace std;


int main(){
	long long int n;
	cin>>n;
	// power of 2^n using bit manipulation
	int count=0;
	while(n!=0){
		if(n&1){
			count+=1;
			}
		if(count==2){
			break;
		}
		n=n>>1;
	}
	if(count==1){
		cout<<"It's a power of 2^n";
	}
	else{
		cout<<"It's not a power of 2^n";
	}
	return 0;
}
			
		
		
		
		
