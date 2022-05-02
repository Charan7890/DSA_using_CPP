#include<iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	int cpy = num;
	int mask =0;
	while(num!=0){
		num=num>>1;
		mask=(mask<<1)|1;
	}
	int res = (~cpy)&mask;
	cout<<"The compliment of "<<cpy<<" is:"<<res;
	return 0;
}
