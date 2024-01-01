#include<bits/stdc++.h>
using namespace std;

void merge(int ar1[],int n,int ar2[],int m){
    int arr[n+m];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(ar1[i]>ar2[j]){
            arr[k]=ar2[j];
            k++;
            j++;
        }
        else if(ar1[i]<ar2[j]){
            arr[k]=ar1[i];
            i++;
            k++;
        }
        else{
            arr[k]=ar1[i];
            k++;
            i++;
        }
    }
    while(i<n){
        arr[k]=ar1[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k]=ar2[j];
        j++;
        k++;
    }

    cout<<"merge array : "<<endl;
    for(int st =0;st < n+m;st++){
        cout<<arr[st]<<" ";
    }
}

int main(){
    int arr1[100];
    int n;
    int m;
    int arr2[100];
    cout<<"first array :-"<<endl;
    cin>>n;
    for(int i=0;i<n ;i++){
        cin>>arr1[i];
    }
    cout<<endl<<"second array :-"<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    cout<<"precess :-"<<endl;
    merge(arr1,n,arr2,m);

    return 0;
}