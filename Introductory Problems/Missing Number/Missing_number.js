

function solve(){
    let n,counts=0;
    const prompt = require('prompt-sync')();
    let arr = [];
    let arr1 = [];
    
    n = parseInt(prompt());
    for(let i=0;i<n-1;i++){
        arr[i]  = parseInt(prompt());
        arr1[arr[i]] = 1;
    }
    for(let i=1;i<=n;i++){
        if(arr1[i] != 1){
            console.log(i);
            break;
        }
    }

}



////        Main Function     /////

    solve();

