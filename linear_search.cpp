#include<iostream>
using namespace std;

bool linearSearch(int a[],int n,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return true;
		}
	}
	return false;
}

int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int size = sizeof(a)/sizeof(int);
	int key;
	cout<<"enter the key:";
	cin>>key;
	int result=linearSearch(a,size,key);
	if(result==true){
		cout<<"element found";
	}
	else{
		cout<<"element not found";
	}
	return 0;
}
