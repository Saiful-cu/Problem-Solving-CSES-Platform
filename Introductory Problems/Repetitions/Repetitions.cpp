#include<iostream>
using namespace std;

void solve(){
    long long int n,counts=0,maxlength=1;
    cin>> n;
    long long int arr[n];
     string str;

    cin>>str;
    int lengths = str.length();

      cout<<str<<endl;
    int repetationLength =1;

    for(int i =1;i<lengths;i++){

        if(repetationLength > maxlength){
            maxlength = repetationLength;
        }
        
        if(str[i] == str[i-1]){
            repetationLength++;
            
        }
        
        else
         repetationLength =1;

        
    }
    cout<<maxlength<<endl;

}

int main(){

    solve();

    return 0;
}

