#include<bits/stdc++.h>
using namespace std;

void insertion(int ar[],int n){
    for(int i=1;i<n;i++){
        int temp = ar[i];
        int j = i-1;
        for(j;j>=0;j--){
            if(ar[j]>temp){
                ar[j+1]=ar[j];
            }
            else{
                break;
            }

        }
        ar[j+1]=temp;
    }
    

}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
     
    insertion(arr,n);
    int arr= new int[34];

    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
    
 
