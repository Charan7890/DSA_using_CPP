#include<iostream>
using namespace std;

int bin_search(int a[],int n,int key){
	int start = 0;
	int end = n-1;
	int mid = start + (end - start)/2;
	int count=0;
	while(start<=end){
		if(a[mid]==key){
			return mid;
		}
		if(a[mid]>key){
			mid--;
			end = mid;
			count++;
			//cout<<count<<endl;
		}
		if(a[mid]<key){
			mid++;
			start=mid;
			count++;
			//cout<<count<<endl;
		}
	}
	return -1;
}
			
		


int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(a)/sizeof(int);
	int key;
	cout<<"enter a key:";
	cin>>key;
	// code for binary search
	int index = bin_search(a,size,key);
	if(index==-1){
		cout<<"the element is not found in the array";
	}
	else{
		cout<<"the element id present at index:"<<index;
	}
	return 0;
}
