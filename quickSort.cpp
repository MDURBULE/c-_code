#include<bits/stdc++.h>
using namespace std;

int position(int arr[],int s,int e){
    if(s>e){
        return 0;
    }
    int count = 0;
    int pivot = arr[s];
    for(int i=1;i<=e;i++ ){
        if(arr[s]>arr[i]){
            count++;
        }
    }
    swap(arr[s],arr[count]);
    int pivotIndex = count;
    
    while(s<pivotIndex && e>pivotIndex){
        if(arr[s]<arr[count]){
            s++;
        }
        if(arr[e]>arr[count]){
            e--;
        }
        if(arr[s]>arr[count] && arr[e]<arr[count]){
            swap(arr[s],arr[e]);
        }
    }

    return count;
}

void quickSort(int *arr,int s,int e){
    if(s < e){
        int p = position(arr,s,e);
        cout<<endl<<s<<" "<<e;

    quickSort(arr,0, p-1);
    quickSort(arr,p+1,e);
    
    }

   
    
}

int main(){
    int arr[6]={8,65,4,43,3,1};
    int n=6;

    quickSort(arr,0,5);
    // cout<<position(arr,0,n-1);
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}