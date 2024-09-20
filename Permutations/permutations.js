

function solve(){
    let n,counts=0;
    const prompt = require('prompt-sync')();
    let arr = [];
    
    n = parseInt(prompt());
    let beforeHalf = n-1;
    let afterHalf = n;
    if(n == 1){
        process.stdout.write(n +' ');
    }
    else if(n>3){
        for(let i=0;i<n/2 -1;i++){
            process.stdout.write(beforeHalf+'b ');
            beforeHalf -= 2;
        }
        for(let i=n/2;i<n;i++){
            process.stdout.write(afterHalf + 'a ');
            afterHalf -=2;
        }
    
    }
    else{
        process.stdout.write("NO SOULTION");
    }
}



////        Main Function     /////

    solve();

