#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int res = gcd(a,b);
    cout<<"gcd of "<<a<<" and "<<b<<" is:"<<res<<endl;;
    int res1;
    res1 = (a*b)/res;
    cout<<"lcm of "<<a<<" and "<<b<<" is:"<<res1;

    return 0;
}

