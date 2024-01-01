#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}

void reverse(int n){
    if(n==0){
        return;
    }
    cout<< n<<endl;
    reverse(n-1);
}

void number(int n){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }
    int rem = n%10;
    n = n/10;
    number(n);
    cout << arr[rem]  << " ";
}

int palidrome(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return palidrome(n-1)+palidrome(n-2);
}


int main(){
    int n;
    cin >> n ;

    // power of number
    // cout << power(n) ;

    // reverse the number
    // reverse(n);

    // number with there spellings
    // number(n);

    // check palindrome
    // cout<< palidrome(n)<<endl;
    
    return 0;
}