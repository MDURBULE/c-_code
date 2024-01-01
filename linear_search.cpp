#include<bits/stdc++.h>
using namespace std;


int lenear(int ar[],int n,int key){
    for(int i=0;i<n;i++){
        if(key == ar[i]){
            return i;
        }
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
    cout<<endl;
    int k;
    cout<<"Enter a key : ";
    cin>>k;

    cout<<endl;

    cout<<lenear(arr,n,k);
    

    return 0;
}