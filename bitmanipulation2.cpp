#include<iostream>
using namespace std;

int main(){
	//counting number of ones in binary format of a 
	//given number
	int n;
	cin>>n;
	int arr[50];
	int count=0;
	int i=0;
	while(n!=0){
		if(n&1){
			count++;
			arr[i++]=1;
			
		}
		else{
			// do nothing
			arr[i++]=0;
		}
		n=n>>1;
	}
	cout<<"the number of in given number is(binary):"<<count;
	cout<<"the binary format of the given number is:"<<endl;
	//int size=sizeof(arr)/sizeof(arr[0]);
	for(int j=i-1;j>=0;j--){
		cout<< arr[j]<<" ";
	}
	return 0;
}
