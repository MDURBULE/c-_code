#include<bits/stdc++.h>
using namespace std;

bool sortArr(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return sortArr(arr+1,n-1);
    }
}

int sumArr(int arr[],int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }
    int ans = arr[0]+ sumArr(arr+1,n-1);
    return ans;
}
void sumArr1(int arr[],int n){
    if(n==0){
        return ;
    }
    cout<<arr[0]<<" ";
    sumArr1(arr+1,n-1);
}
bool search(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        return search(arr+1,n-1,key);
    }
}
bool binary(int arr[],int n,int key){
    
    int mid = n/2;
    if(n==0){
        return false;
    }
    if(key>arr[mid]){
        
        return binary(arr+mid+1,n-mid-1,key);
    }
    if(key<arr[mid]){
        return binary(arr,n-mid,key);
    }
    if(key == arr[mid]){
        return true;
    }
}
int main(){
    
    cout<<"Enter a array number : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cout<<"The array is sorted : "<<sortArr(arr,n);
    // cout<<"The sum is : "<<sumArr(arr,n);
    // sumArr1(arr,n);
    cout<<"The key is present : "<<binary(arr,n,1);
    
    return 0;
}