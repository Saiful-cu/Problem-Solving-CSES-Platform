function solve(){
    let n,counts=0;
    const prompt = require('prompt-sync')();
    let arr = [];
    
    n = parseInt(prompt());
    for(let i=0;i<n;i++){
    let y = parseInt(prompt());
    let x = parseInt(prompt());
    
    if(x>y){
        counts = (x* (x-1)) - (x-2);
        let maxRound = 2*x -1;
        if(x%2 == 0){
            counts = counts +(y-1);
        }
        else
           counts = counts + (maxRound - y);
        console.log(counts);
    }
    else{
        counts = (y* (y-1)) - (y-2);
        let maxRound = 2*y -1;
        if(y%2 == 0){
            counts = counts + (maxRound - x);
            //cout<<counts<<maxRound<<endl;
        }
        else
           counts = counts +(x-1);
           console.log(counts);
    }
}
}





////        Main Function     /////

 solve();
 

