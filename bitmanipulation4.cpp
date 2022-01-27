#include<iostream>
#include<math.h>
using namespace std;


int main(){
	// converting binary to decimal
	long int n;
	cin>>n;
	long long int sum=0;
	int i=0;
	while(n!=0){
		int rem = n%10;
		if (rem==1){
			sum+=pow(2,i);
		}
		n=n/10;
		i++;
	}
	cout<<"the decimal number of a "<<n<<" is:"<<sum;
	return 0;
}
