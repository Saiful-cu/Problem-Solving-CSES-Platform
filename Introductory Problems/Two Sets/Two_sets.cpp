#include<iostream>
using namespace std;

void solve(){
    long long int n;
    cin>> n;
    long long int result = (n*(n+1) )/2;
    if(result%2 != 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        long long int arr1[n], half1 = 0, half2= 0,j=0,k=0;
        long long int arr2[n];
        for(int i= n;i>0;i--){
            
            if(half1+i <= result/2){
                arr1[j] = i;
                half1 += i;
                j++;
            }
            else if(half2+i <= result/2){
                arr2[k] = i;
                half2 += i;
                k++;
            }
        }
        if(j<k){
            cout<<k<<endl;
            for(int i=0;i<k;i++){
                cout<<arr2[i]<<" ";
            }
            cout<<endl;
             cout<<j<<endl;
            for(int i=0;i<j;i++){
                cout<<arr1[i]<<" ";
            }
        }
        else{
            cout<<j<<endl;
            for(int i=0;i<j;i++){
                cout<<arr1[i]<<" ";
            }
            cout<<endl;
            cout<<k<<endl;
            for(int i=0;i<k;i++){
                cout<<arr2[i]<<" ";
            }
            cout<<endl;
        }
    }

}



int main(){

    solve();

    return 0;
}

