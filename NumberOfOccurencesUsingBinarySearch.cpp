#include<iostream>

using namespace std;

int bsearchLastOccurence(int a[],int n,int key){
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

int bsearchFirstOccurence(int a[],int n,int key){
    int f=0,l=n-1;
    int mid=f+(l-f)/2;
    int ans=-1;
    while(f<=l){
        if(a[mid]==key){
            ans=mid;
            l=mid-1;
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
    int fir_occur = bsearchFirstOccurence(a,size,key);
    int last_occur = bsearchLastOccurence(a,size,key);
    int total_occurences = last_occur-fir_occur+1;
    if(fir_occur==-1 && last_occur==-1){
        cout<<"element not found";
    }
    else{
    cout<<"The element repeated for:"<<total_occurences;
    }
    return 0;
}
