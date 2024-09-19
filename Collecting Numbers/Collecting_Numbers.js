function solve(){
    let  rounds=1, k=1, j=0;
    const prompt = require('prompt-sync')();
    

    const n = parseInt(prompt());
    const arr =[];
    //console.log(n);
    for(let i=1;i<=n;i++){
        arr[i] = parseInt(prompt());
    }

    for(let i=1;i<=n;i++){
        if(arr[i] == k){
            k +=1;
        }
        if(k == n+1){
            break;
        }
        if(i == n){
            rounds ++;
            i = 0;
        }
    }
    console.log(rounds);
}


// Main Functions

solve();