#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n;
	bool arr[n+1];
	arr[0]=false;
	arr[1]=false;
	for(int i=2;i<n+1;i++){
		arr[i]=true;
	}
	// code logic starts from here
	for(int i=2;i*i<=n;i++){
		for(int j = 2*i;j<=n;j+=i){
			arr[j]=false;
		}
	}
	for(int i=0;i<n+1;i++){
		if(arr[i]){
			cout<<i<<" prime"<<endl;
		}
		else{
			cout<<i<<" not prime"<<endl;
		}
	}
}
			
		
