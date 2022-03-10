#include<iostream>

using namespace std;

int bsearch(int a[],int n,int key){
    int f=0,l=n-1;
    int mid=f+(l-f)/2;
    int ans=-1;
    while(f<=l){
        if(a[mid]==key){
            ans=mid;
            f=mid+1;
        }
        else if(a[mid]>key){
            l=mid-1;
        }
        else{
            f=mid+1;
        }
        mid=f+(l-f)/2;
    }
    return ans;
}


int main(){
    int a[]={2,2,2,4,6,6};
    int size = sizeof(a);
    int key;
    cout<<"enter a key:";
    cin>>key;
    int ind = bsearch(a,size,key);
    if(ind==-1){
        cout<<"element not found";
    }
    else{
    cout<<"The element is present at:"<<ind;
    }
    return 0;
}
