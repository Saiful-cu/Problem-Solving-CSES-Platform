#include<iostream>
using namespace std;

void solve(){
    long long int n,counts=1, beforeHalf, afterHalf;
    cin>> n;
    beforeHalf = n-1;
    afterHalf = n;

    if(n == 1){
        cout<<n<<endl;
    }
    else if(n>3){
        for(int i=0;i<n/2;i++){    
            cout<<beforeHalf<<" ";
            beforeHalf -= 2;   
        }
        for(int i=n/2;i<n;i++){    
            cout<<afterHalf<<" ";
            afterHalf -= 2;   
        }
        
    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }

}

int main(){

    solve();

    return 0;
}

