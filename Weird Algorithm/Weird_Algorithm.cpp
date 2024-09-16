#include<iostream>
using namespace std;

void solve(){
    long long int n;
    cin>> n;

    while(n != 1){
        cout<<n<<" ";
        if(n%2 ==0){
            n = n/2;
        }
        else{
            n = n*3 + 1;
        }
    }
    cout<<n<<" ";
}

int main(){

    solve();
    
    return 0;
}