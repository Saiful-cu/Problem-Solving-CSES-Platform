#include<iostream>
using namespace std;

void solve(){
    long long int n,counts=0;
    cin>> n;
    long long int arr[n+1], arr1[n+1];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        arr1[arr[i]] = 1;
    }
    for(int i =1;i<=n;i++){
        if(arr1[i] != 1){
            cout<<i<<endl;
            break;
        }
    }

}

int main(){

    solve();

    return 0;
}

