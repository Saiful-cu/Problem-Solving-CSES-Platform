#include<iostream>
using namespace std;

void solve(){
    long long int n,counts=0;
    cin>> n;
    long long int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i] != i){
            counts++;
        }

    }
    if(counts>1){
        cout<<counts-1<<endl;
    }
    else cout<<1<<endl;
    


}

int main(){

    solve();

    return 0;
}

