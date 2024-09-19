#include<iostream>
using namespace std;

void solve(){
    long long int n,rounds=1,k=1,j=0;
    cin>> n;
    long long int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
 
    for(long long int i=1;i<=n;i++){
      
        if(arr[i] == k){
            k += 1;   
           
        }
        
         if(k == n+1){
            break;
        }
        if(i == n){
            rounds ++;
            i =0;
        }
        
        
        
    }
     cout<<rounds<<endl;
    


}

int main(){

    solve();

    return 0;
}

