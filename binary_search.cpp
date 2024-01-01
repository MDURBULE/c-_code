#include<bits/stdc++.h>
using namespace std;

int binary(int ar[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(ar[mid]==key){
            return mid;
        }
        else if(ar[mid]>key){
             end = mid -1;
        }
        else if(ar[mid]<key){
            start = mid + 1;
        }

        mid =start + (end - start)/2;
    }
    return -1;

}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(arr,arr+n);
    cout<<endl;
    int key;
    cin>>key;

    cout<<endl;

    cout<<binary(arr,n,key);


    return 0 ;
}