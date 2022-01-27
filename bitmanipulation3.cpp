#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// power of 2^n;
	int n;
	cin>>n;
	int ans=0,i=0;
	while(ans!=n && ans<=n){
		ans=pow(2,i);
		if(ans==n)
		break;
		i++;
	}
	if(ans==n)
	cout<<"this number is of power 2:"<<ans;
	else
	cout<<"it's not!";
	
	
		 
	
	
	
	
	
	return 0;
}
