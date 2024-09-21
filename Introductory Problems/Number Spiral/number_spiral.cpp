#include<iostream>
using namespace std;

void solve(){
    long long int n,counts=0,x,y;
    cin>> n;
    //long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>y>>x;
        
        if(x>y){
            counts = (x* (x-1)) - (x-2);
            int maxRound = 2*x -1;
            if(x%2 == 0){
                counts = counts +(y-1);
            }
            else
               counts = counts + (maxRound - y);
            cout<<counts<<endl;
        }
        else{
            counts = (y* (y-1)) - (y-2);
            int maxRound = 2*y -1;
            if(y%2 == 0){
                counts = counts + (maxRound - x);
                //cout<<counts<<maxRound<<endl;
            }
            else
               counts = counts +(x-1);
            cout<<counts<<endl;
        }
    }

}

int main(){

    solve();

    return 0;
}

