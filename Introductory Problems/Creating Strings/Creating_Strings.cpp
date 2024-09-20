#include<iostream>
#include<string>
using namespace std;

void solve(){
    long long int n,counts=0, numb;
    string s;
    cin >> s;
    int lengths = s.size();

    if(lengths>1){
        cout<<lengths*(lengths-1)<<endl;
    n = lengths-1;
    for(int i= 0;i<=n;i++){
       // cout<<s<<" "<<i;
        for(int j=0;j<n;j++){
            char temp = s[n-j-1];
            s[n-j-1] = s[n-j];
            s[n-j] = temp;
            cout<<s<<endl;
        }
    }
    
    }
    

}

int main(){

    solve();

    return 0;
}

