
#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int t=0,d=m-1,l=0,r=n-1;
    int dir=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    while(t<=d && l<=r){
        if(dir==0){
            for(int i=l;i<=r;i++){
                cout<<a[t][i];
            }
                dir++;
                t++;
        }
        if(dir==1){
            for(int i=t;i<=d;i++){
                cout<<a[i][r];
            }
                r--;
                dir++;
        }
        if(dir==2){
            for(int i=r;i>=l;i--){
                cout<<a[d][i];
            }
                d--;
                dir++;
        }
        if(dir==3){
            for(int i=d;i>=t;i--){
                cout<<a[i][l];
            }
                l++;
                dir++;
        }
        dir=(dir+1)%4;
    }

    return 0;
}
