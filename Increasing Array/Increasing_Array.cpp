#include<iostream>
using namespace std;

void solve(){
    long long int n,counts=0;
    cin>> n;
    long long arr[n];

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    for(long long int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            counts += arr[i] - arr[i+1];
            arr[i+1] = arr[i];
        }  
       // std::cout<<arr[i]<<endl;       
    }
    std::cout<<counts<<endl;
}

int main(){

    solve();

    return 0;
}